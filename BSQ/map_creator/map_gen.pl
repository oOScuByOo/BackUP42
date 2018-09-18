# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    map_gen.pl                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmolinar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/14 15:53:31 by tmolinar          #+#    #+#              #
#    Updated: 2018/09/14 16:04:03 by tmolinar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/usr/bin/perl

use warnings;
use strict;

die "program x y density" unless (scalar(@ARGV) == 3);

my ($x, $y, $density) = @ARGV;

print "$y.ox\n";
for (my $i = 0; $i < $y; $i++) {
	for (my $j = 0; $j < $x; $j++) {
		if (int(rand($y) * 2) < $density) {
			print "o";
		}
		else {
			print ".";
		}
	}
	print "\n";
}
