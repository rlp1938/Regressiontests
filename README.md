# README for regressiontests

## Purpose

This is just a storage box for programs I use for testing library code
that I have under development.

At inception I have the following programs:

1. testsort - regression testing of sorting functions.
2. qss - playing around with quick sort.

## Compiling

Just run ./nooptim.sh

I have not wrapped any autotools code around this stuff because the
compiled code from using such is entirely useless in gdb.
