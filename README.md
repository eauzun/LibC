
# My LibC

This project is a customized version of the standard C library functions, prefixed with `my_` to avoid naming conflicts.

## Features

- Implements common C library functions with `my_` prefix.
- Includes a `Makefile` for easy compilation.
- All functions are declared in `my_libc.h`.

## Compilation

To compile the library:
```bash
make
```

## Usage

Include the header file in your project:
```c
#include "my_libc.h"
```

Link the library when compiling your project:
```bash
gcc -o my_program my_program.c -L. -lmy_libc
```
