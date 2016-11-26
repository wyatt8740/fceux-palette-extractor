#! /bin/sh
gcc palette2bin.c -o write-binary-palette-to-stdout -I.
./write-binary-palette-to-stdout > palette.pal
