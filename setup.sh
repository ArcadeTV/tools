#!/bin/sh
./SOURCE/vasm/make CPU=m68k SYNTAX=mot
./SOURCE/srecpatch/make
./SOURCE/fixheader/make
./SOURCE/checkhash/make
./SOURCE/pad/make