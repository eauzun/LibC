
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

## Function Descriptions

Below is a list of each function included in `my_libc`, with a brief description of its functionality.

```c
my_memset    // Fills a block of memory with a specified byte. Useful for initializing memory to a specific value.
my_bzero     // Sets a block of memory to zero, commonly used to initialize buffers.
my_memcpy    // Copies a specified number of bytes from one memory area to another. The areas must not overlap.
my_memmove   // Similar to my_memcpy but handles overlapping memory areas safely.
my_memchr    // Scans a block of memory for a specified byte and returns a pointer to it if found.
my_memcmp    // Compares two blocks of memory and returns an integer indicating their relative order.
my_strlen    // Calculates the length of a null-terminated string, excluding the null character.
my_strdup    // Allocates memory and copies a string into it. Useful for duplicating strings.
my_strcpy    // Copies a null-terminated string to a destination buffer.
my_strncpy   // Copies a specified number of characters from a string, potentially padding with null bytes.
my_strcat    // Appends one string to the end of another, modifying the destination string.
my_strncat   // Appends up to a specified number of characters from one string to another.
my_strchr    // Searches a string for a specified character and returns a pointer to it if found.
my_strrchr   // Finds the last occurrence of a specified character in a string.
my_strstr    // Locates the first occurrence of a substring within a string.
my_strcmp    // Compares two strings and returns an integer indicating their relative order.
my_strncmp   // Compares up to a specified number of characters between two strings.
my_atoi      // Converts a string to an integer. Handles optional leading whitespace and signs.
my_isalpha   // Checks if a character is an alphabetical letter.
my_isdigit   // Checks if a character is a decimal digit.
my_isalnum   // Checks if a character is alphanumeric.
my_isascii   // Checks if a character is part of the ASCII set.
my_isprint   // Checks if a character is printable.
my_toupper   // Converts a lowercase letter to uppercase.
my_tolower   // Converts an uppercase letter to lowercase.
my_calloc    // Allocates memory for an array and initializes it to zero.
my_realloc   // Resizes a previously allocated memory block to a new size.
my_strlcpy   // Copies up to a specified number of characters to a destination string, ensuring null termination.
my_strlcat   // Appends a string to a destination up to a specified length, ensuring null termination.
my_substr    // Extracts a substring from a string, given a starting index and length.
my_strjoin   // Concatenates two strings into a newly allocated string.
my_split     // Splits a string into an array of substrings based on a specified delimiter.
my_itoa      // Converts an integer to a string.
my_strmapi   // Applies a function to each character of a string, creating a new string with the results.
my_striteri  // Iterates over each character of a string, allowing modifications using a function.
my_putchar_fd // Outputs a character to the specified file descriptor.
my_putstr_fd // Writes a string to the specified file descriptor.
my_putendl_fd // Writes a string followed by a newline to the specified file descriptor.
my_putnbr_fd  // Outputs an integer to the specified file descriptor.
```
