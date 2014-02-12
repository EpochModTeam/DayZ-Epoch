use strict;
use warnings;
use Data::Dumper;

# Customize
my $configFile = '../../SQF/dayz_code/Configs/CfgBuildingLoot/CfgBuildingLoot.hpp';

# do not touch
my $cfg = '';
my $collect = 0;
my $small = 0;
my @itemType;
my @itemChance;
open(CFG, '<', $configFile) or die $!;
while (my $line = <CFG>) {

	if ($line =~ /itemType(Small)?\[\]\s*=\s*\{\s*$/) {
		$collect = 1;
		@itemType = ();

		if (defined($1) && $1) {
			$small = 1;
		}
		else {
			$small = 0;
		}
	}
	elsif ($collect == 1 && $line =~ /^\s*\{\s*"(\w*)",\s*"(\w*)"\s*\}/i) {
		push(@itemType, {
			Class => $1
			,Type => $2
		});
	}
	elsif ($collect == 1 && $line =~ /\};/) {
		$collect = 2;
	}

	elsif ($collect == 2 && $line =~ /itemChance(?:Small)?\[\]\s*=\s*\{/) {
		$collect = 3;
		@itemChance = ();
	}
	elsif ($collect == 3 && $line =~ /^\s*(\d+\.\d+),?/) {
		push(@itemChance, $1);
	}
	elsif ($collect == 3 && $line =~ /\};/) {
		$collect = 0;

		$cfg .= "\t\titemChance[] = {\n" if $small == 0;
		$cfg .= "\t\titemChanceSmall[] = {\n" if $small == 1;
		for (my $i=0; $i<scalar(@itemType); $i++) {
			$cfg .= sprintf("\t\t\t%s{\"%s\",\"%s\",%.2f}\n", ($i > 0 ? ',' : ''), $itemType[$i]->{Class}, $itemType[$i]->{Type}, $itemChance[$i]);
		}
		$cfg .= "\t\t};\n";
	}
	elsif ($line !~ /^\s*\/\// && $line !~ /^\s*$/) {
		$cfg .= $line;
	}
}
close(CFG);

$cfg =~ s/(\d+\.\d+)[0]+\}\s*$/$1}/gm;

open(NEWCFG,'>', $configFile) or die $!;
print NEWCFG $cfg;
close(NEWCFG);

exit(0);