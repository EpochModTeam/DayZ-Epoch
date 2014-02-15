use strict;
use warnings;
use Data::Dumper;

# Customize
my $configFile = '../../SQF/dayz_code/Configs/CfgBuildingLoot/CfgLootSmall.hpp';

# do not touch
my $cfg = '';
my $collect = 0;
my $small = 0;
my @itemType;
my @itemChance;
open(CFG, '<', $configFile) or die $!;
while (my $line = <CFG>) {
	if ($line =~ /^\s*(\w+)\[\]\s*=\s*\{/i) {
		$collect = 1;
		$cfg .= "\t".$1."[] = {\n";
	}
	elsif ($collect == 1 && $line =~ /^\s*"([^"]+)"/) {
		push(@itemType, $1);
	}
	elsif ($collect == 1 && $line =~ /^\s*\},/) {
		$collect = 2;
	}
	elsif ($collect == 2 && $line =~ /^\s*(\d+\.\d+),?/) {
		push(@itemChance, $1);
	}
	elsif ($collect == 2 && $line =~ /^\t\}/) {
		$collect = 0;

		for (my $i=0; $i<scalar(@itemType); $i++) {
			$cfg .= sprintf("\t\t%s{\"%s\",%.2f}\n", ($i > 0 ? ',' : ''), $itemType[$i], $itemChance[$i]);
		}
		@itemType = ();
		@itemChance = ();

		$cfg .= "\t};\n";
	}
	elsif ($collect == 0 && $line !~ /^\s*\/\// && $line !~ /^\s*$/) {
		$cfg .= $line;
	}
}
close(CFG);

$cfg =~ s/(\d+\.\d+)[0]+\}\s*$/$1}/gm;

open(NEWCFG,'>', $configFile) or die $!;
print NEWCFG $cfg;
close(NEWCFG);

exit(0);