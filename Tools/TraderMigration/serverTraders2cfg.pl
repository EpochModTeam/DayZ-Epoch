#!/usr/bin/perl -w
use strict;
use warnings;
use DBI;
use JSON;
use Data::Dumper;

my $pathServerTradersSQF = '..\..\Server Files\MPMissions\DayZ_Epoch_11.Chernarus\server_traders.sqf';
my $pathServerTradersCfg = '..\..\SQF\dayz_code\Configs\CfgServerTrader\\';
my $pathServerTraderCategoriesCfg = '..\..\SQF\dayz_code\Configs\CfgServerTraderCategories\\';
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
			$traderCategories->{$catName} = $cat->[1];
		}
		$cfg .= "\t};\n";
		$cfg .= "};\n"
	}

	open(CFG, '>', $pathServerTradersCfg.'Trader'.$traderhuman.'.hpp') or die $!;
	print CFG $cfg;
	close(CFG);
}

foreach my $traderCategory (keys $traderCategories) {
	my $cfg = '';

	$cfg .= "class ".$traderCategory." {\n";
	$cfg .= "\ttid = ".$traderCategories->{$traderCategory}.";\n";
	$cfg .= "};\n";

	open(CFG, '>', $pathServerTraderCategoriesCfg.$traderCategory.'.hpp') or die $!;
	print CFG $cfg;
	close(CFG);
}

exit(0);