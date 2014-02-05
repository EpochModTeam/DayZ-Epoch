#!/usr/bin/perl -w
use strict;
use warnings;
use DBI;
use JSON;
use Data::Dumper;

my $pathServerTradersSQF = '..\..\Server Files\MPMissions\DayZ_Epoch_17.Chernarus\server_traders.sqf';
my $pathServerTradersCfg = '..\..\SQF\dayz_epoch_b\CfgServerTrader\\';
my $pathServerTraderCategoriesCfg = '..\..\SQF\dayz_epoch_b\CfgServerTrader\Category\\';
my $MySQL = DBI->connect('DBI:mysql:host=localhost;database=test2', 'root', 'root');

open(TRADERSQF, '<', $pathServerTradersSQF) or die $!;
my $trader = '';
my $isTrader = 0;
my @traders;
my $traderCategories = {};
while (<TRADERSQF>) {
	if (/^menu_(\w+)\s*=\s*\[/) {
		$trader = '{"'.$1.'":[';
		$isTrader = 1;
	}
	elsif (/\];/ && $isTrader) {
		$trader .= ']}';
		$trader =~ s/\r|\n|\t//g;
		push(@traders, JSON->new()->decode($trader));
	}
	elsif ($isTrader) {
		$trader .= $_;
	}
}
close(TRADERSQF);

$trader = {};
my $traderHumanity = {
	Hero => {}
	,Friendly => {}
	,Neutral => {}
	,Bandit => {}
};
foreach my $trad (@traders) {
	my $name = (keys %{$trad})[0];
	$trader->{$name} = {
		Humanity => @{$trad->{$name}}[2]
		,Categories => @{$trad->{$name}}[0]
		,Special => @{$trad->{$name}}[1]
	};

	if ($trader->{$name}->{Humanity} =~ /hero/) {
		$traderHumanity->{Hero}->{$name} = $trader->{$name};
	}
	elsif ($trader->{$name}->{Humanity} =~ /friendly/) {
		$traderHumanity->{Friendly}->{$name} = $trader->{$name};
	}
	elsif ($trader->{$name}->{Humanity} =~ /neutral/) {
		$traderHumanity->{Neutral}->{$name} = $trader->{$name};
	}
	elsif ($trader->{$name}->{Humanity} =~ /hostile/) {
		$traderHumanity->{Bandit}->{$name} = $trader->{$name};
	}
}

foreach my $traderhuman (keys $traderHumanity) {
	my $cfg = '';
	foreach my $class (keys %{$traderHumanity->{$traderhuman}}) {
		$cfg .= "class ".$class." {\n";
		$cfg .= "\thumanity = \"".$traderHumanity->{$traderhuman}->{$class}->{Humanity}."\";\n";
		$cfg .= "\tcategory[] = {\n";
		foreach my $cat (@{$traderHumanity->{$traderhuman}->{$class}->{Categories}}) {
			my $catName = '';
			my $sth = $MySQL->prepare(q~
				SELECT
					name	AS CatName
				FROM
					trader_tids
				WHERE
					id = ?
			~);
			$sth->execute(
				$cat->[1]
			);
			while (my $row = $sth->fetchrow_hashref()) {
				$catName = $traderhuman.$row->{CatName};
			}
			$sth->finish();
			$catName =~ s~ |-|/~~g;

			$cfg .= "\t\t{\"".$cat->[0]."\",\"".$catName."\"}\n";
			if (!defined($traderCategories->{$catName})) {
				$traderCategories->{$catName} = [$cat->[1]]
			} else {
				push(@{$traderCategories->{$catName}}, $cat->[1]);
			}
		}
		$cfg .= "\t};\n";
		$cfg .= "};\n"
	}

	open(CFG, '>', $pathServerTradersCfg.'Trader'.$traderhuman.'.hpp') or die $!;
	print CFG $cfg;
	close(CFG);
}

foreach my $traderCategory (sort keys $traderCategories) {
	my $cfg = '';

	foreach my $categoryId (@{$traderCategories->{$traderCategory}}) {
		$cfg .= "class Category_".$categoryId." {\n";
		#$cfg .= "\ttid = ".$traderCategories->{$traderCategory}.";\n";
		my $sth = $MySQL->prepare(q~
			SELECT
				item	AS Item
				,buy	AS Buy
				,sell	AS Sell
				,afile	AS aFile
			FROM
				traders_data
			WHERE
				tid = ?
		~);
		$sth->execute($categoryId);
		while (my $row = $sth->fetchrow_hashref()) {
			if ($row->{Item} =~ /^\["([^"]+)",\d+\]$/) {
				$row->{Item} = $1;
			}
			else {next;}
			if ($row->{Buy} =~ s/^\[(\d+),"([^"]+)",(\d+)\]$/{$1,"$2"}/) {}
			else {next;}
			if ($row->{Sell} =~ s/^\[(\d+),"([^"]+)",(\d+)\]$/{$1,"$2"}/) {}
			else {next;}

			$cfg .= "\tclass ".$row->{Item}." {\n";
			$cfg .= "\t\ttype = \"".$row->{aFile}."\";\n";
			$cfg .= "\t\tbuy[] = ".$row->{Buy}.";\n";
			$cfg .= "\t\tsell[] = ".$row->{Sell}.";\n";
			$cfg .= "\t};\n";
		}
		$sth->finish();
		$cfg .= "};\n";

		print STDERR $traderCategory." - ".$categoryId."\n";
	}
	open(CFG, '>', $pathServerTraderCategoriesCfg.$traderCategory.'.hpp') or die $!;
	print CFG $cfg;
	close(CFG);
}

exit(0);