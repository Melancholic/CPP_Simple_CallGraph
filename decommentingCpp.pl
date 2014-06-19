#! /usr/bin/perl -w
use strict;
open (IN, "$ARGV[0]") || die "$!";
my $s='';
while (<IN>) {$s.=$_};
$s =~ s#/\*/*(\*+|([^*/][^*]*\*+)+)/|//[^\n]*|("(\\.|[^"\\])*"|'(\\.|[^'\\])*'|.[^/"'\\]*)#defined $3 ? $3 : ""#gse;
print $s;
