# ft_printf

## Description

The **ft_printf** project is a custom implementation of the standard `printf` function in C. This project was undertaken as part of the École 42 curriculum to deepen understanding of variadic functions and argument handling in C. The goal is to create a functional, extensible version of `printf` that handles various format specifiers and mimics the behavior of the standard `printf` function.

---

## Features

### Mandatory Part

The `ft_printf` function is designed to handle the following format specifiers:

- `%c` - Prints a single character.
- `%s` - Prints a string.
- `%p` - Prints a pointer in hexadecimal format.
- `%d` - Prints a decimal (base 10) number.
- `%i` - Prints an integer in base 10.
- `%u` - Prints an unsigned decimal (base 10) number.
- `%x` - Prints a number in lowercase hexadecimal (base 16).
- `%X` - Prints a number in uppercase hexadecimal (base 16).
- `%%` - Prints a percent sign.

### Bonus Part (Optional)

Additional features that can be implemented as bonuses:

- **Flag Management** - Support for the following flags:
  - `-` : Left-justify the result.
  - `0` : Zero-fill padding.
  - `.` : Precision specifier.
  - Field minimum width for all conversions.
  - `#` : Alternate form for hexadecimal values.
  - `+` : Display a plus sign for positive numbers.
  - Space : Adds a space before positive numbers.

> **Note**: The bonus part will only be assessed if the mandatory part is fully functional and passes all requirements.

---

## Compilation and Usage

Compile the library using the provided Makefile:

    make

This will produce the `libftprintf.a` static library, which you can include in your own C projects. To compile with the bonus part, use:

    make bonus

---

## Project Structure

- **src/**: Contains the source files (`.c` files).
- **include/**: Contains the header files (`*.h` files).
- **Makefile**: Used for compiling the library and bonus part.

---

## How to Use

After compiling, include the `ft_printf.h` header in your project and link the `libftprintf.a` file during the compilation of your own code:

    #include "ft_printf.h"

Compile your program with the static library:

    gcc -Wall -Wextra -Werror -L. -lftprintf my_program.c -o my_program

---

## Author

Project developed by [Malik](https://github.com/ma1iik) as part of the École 42 curriculum.
