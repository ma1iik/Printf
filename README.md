# ft_printf (Custom Printf Reimplementation)

A custom implementation of the standard C `printf` library function (`libc`). Recreates variadic argument parsing, formatted output conversions, memory address printing, and hexadecimal base conversions.

![Language](https://img.shields.io/badge/Language-C99-blue?logo=c&logoColor=white)
![Variadic](https://img.shields.io/badge/Features-va__list%20%7C%20Variadic%20Functions-orange)
![42 Score](https://img.shields.io/badge/42_Score-100%2F100-success)
![License](https://img.shields.io/badge/License-MIT-green)

---

## Overview

`ft_printf` explores variadic functions in C (`stdarg.h`). It parses a format string, intercepts `%` specifier tokens, retrieves the corresponding argument from the variable argument list (`va_list`), converts it to characters, writes to `stdout`, and returns the total character count printed.

---

## Supported Format Specifiers

| Specifier | Output Type | Description & Example Output |
| :---: | :--- | :--- |
| `%c` | Single Character | Prints a single character (e.g., `'A'`). |
| `%s` | String | Prints a null-terminated string (e.g., `"Hello"`). Handles `NULL` strings gracefully (`(null)`). |
| `%p` | Pointer Address | Prints a memory address in hexadecimal format prefixed with `0x` (e.g., `0x7fff5fbff7c0`). |
| `%d` | Signed Integer | Prints a signed base 10 integer. |
| `%i` | Base 10 Integer | Prints a signed integer in base 10. |
| `%u` | Unsigned Integer | Prints an unsigned decimal number. |
| `%x` | Lowercase Hexadecimal | Converts and prints an unsigned integer in lowercase hex (`0-9a-f`). |
| `%X` | Uppercase Hexadecimal | Converts and prints an unsigned integer in uppercase hex (`0-9A-F`). |
| `%%` | Percent Sign | Escapes and prints a literal `%` character. |

---

## Technical Architecture

```
Format String ---> % Specifier Parser ---> va_arg Interceptor ---> Base / Pointer Converter ---> Output Buffer & Character Count
```

1. **Format Scanner**: Iterates character by character through the format string. Non-percent characters are immediately written to standard output (`write(1, ...)`).
2. **Variadic Unpacking (`stdarg.h`)**: Upon detecting `%`, evaluates the next character to call the matching conversion function, fetching arguments via `va_arg(args, type)`.
3. **Hexadecimal & Pointer Formatting**: Implements recursive base conversion ($N \pmod{16}$) for `%x`, `%X`, and `%p`.

---

## File Structure

```
.
├── ft_printf.h          # Function prototypes, structures, stdarg includes
├── ft_printf.c          # Entry point, format scanner, main variadic loop
├── ft_putnbrhex.c       # Hexadecimal & pointer address conversion handlers
├── ft_utils.c           # Character, string, and integer output helpers
├── libft/               # Custom C standard library dependency
└── Makefile             # Builds libftprintf.a library archive
```

---

## Getting Started

### Prerequisites
- C compiler (`gcc` or `clang`)
- `make`

### Compilation

Build the static library archive `libftprintf.a`:

```bash
git clone https://github.com/ma1iik/Printf.git
cd Printf
make
```

This compiles all objects and creates `libftprintf.a` at the root directory.

---

## Integration & Usage

### 1. Link to Your C Project

Include `ft_printf.h` and link `libftprintf.a` during compilation:

```c
#include "ft_printf.h"

int main(void)
{
    int len;
    void *ptr = &len;

    len = ft_printf("Hello, %s! Magic number: %d, Pointer: %p, Hex: %x\n", "world", 42, ptr, 255);
    ft_printf("Printed %d characters.\n", len);

    return (0);
}
```

### 2. Compile Your Program

```bash
gcc -Wall -Wextra -Werror main.c -L. -lftprintf -o printf_demo
./printf_demo
```

---

## License

Distributed under the MIT License. See `LICENSE` for details.
