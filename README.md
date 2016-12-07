# fceux-palette-extractor
Extracts palette data in FCEUX header format to a binary .pal-format palette for use in other emulators. Public domain.

This program's a kind of strange one. The end result is essentially a binary
dump of the array of arrays in FCEUX's 'palettes.h'. The one in this project
is a hybrid of two headers in FCEUX just to define everything neatly. Instead of
doing the annoying parsing of sourcecode and bitwise operations, I simply
compile the data into an executable and have it write that data to `stdout`
when run, and let the preprocessor and compiler do all of that for me.

Since it prints binary to stdout, you will want to make sure to pipe this to a
file or another program.

I used some 'sed' and 'tr' to format all three of the palettes into shape for
parsing, thus necessitating that this file be different from FCEUX's header.

There is technically a fourth palette in the file, but for reasons unknown to
me it is identical to the default, only it displays the values as they are
after the bit shift operations are applied. This has been omitted.
