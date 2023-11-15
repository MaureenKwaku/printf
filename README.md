# Custom Printf Implementation

This is a custom implementation of the `printf` function in C, providing additional features and handling specific conversion specifiers.

## Features

- Supports standard conversion specifiers: `%s`, `%c`, `%%`, `%i`, `%d`, `%b`, `%u`, `%o`, `%x`, `%X`, `%S`.
- Additional conversions: `%p`, `%r`.
- Length modifiers: `l`, `h` for conversions: `%d`, `%i`, `%u`, `%o`, `%x`, `%X`.
- Basic error handling and warnings.

## Getting Started

To use this custom `printf` implementation in your C program, follow these steps:

### Prerequisites

- Ensure you have `gcc` (GNU Compiler Collection) installed on your system.

### Usage

To use this custom `printf` implementation, include the `main.h` header file in your C program, and then call the `_printf` function with the desired format string and arguments.

### Compilation

gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o printf

### Running

./printf

#### Conclusion

This detailed README provides clear instructions on how to use and compile your printf project.
