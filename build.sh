#!/bin/sh

tmpd="$PWD"; [ "$PWD" = "/" ] && tmpd=""
case "$0" in
  /*) cdir="$0";;
  *) cdir="$tmpd/${0#./}"
esac
cdir="${cdir%/*}"

cd "$cdir"
gcc -g -Wall -O3 -c crc16.c
g++ -g -Wall -O3 -o pacextractor BinPack.cpp typedef.cpp main.cpp crc16.o
rm -f crc16.o
