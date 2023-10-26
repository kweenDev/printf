# Custom Printf Project

## Overview

The `printf` function in C is a powerful tool for formatted output. However, it often falls short when we need more advanced features or specialized formatting. This project is an attempt to create a custom `printf` function that goes beyond the basic functionality of the standard library `printf`. Our goal is to provide a highly versatile and feature-rich alternative that can handle a wide range of format specifiers and additional options.

## Custom `printf` Features

- **Extended Format Specifiers**: My custom `printf` implementation supports a wide range of standard format specifiers, including `%c`, `%s`, `%d`, `%i`, `%u`, `%o`, `%x`, `%X`, `%p`, `%S`, `%r`, `%R`, and `%b`. This allows for flexible and detailed output formatting.

- **Flag Characters**: I've implemented flag characters, such as `+`, `-`, `#`, `0`, and `space`, for non-custom conversion specifiers. This enables fine-grained control over the output's appearance.

- **Precision and Field Width**: You can specify precision in the format string (e.g., `%5.2s`) to control the number of decimal places, and field width (e.g., `%10d`) to adjust the output width by padding with spaces or zeros.

- **Custom Specifiers**: I introduce custom specifiers for extended functionality:
  - `%S`: Handles non-printable characters (0 < ASCII < 32 or >= 127) as `\x` followed by the ASCII code value in hexadecimal.
  - `%r`: Prints the reversed string.
  - `%R`: Prints the string in ROT13 encoding.
  - `%C`: Prints custom strings with unique handling.
  - `%b`: Converts unsigned integers to binary.

- **Error Handling**: My implementation ensures robust error handling and graceful handling of unknown or unsupported format specifiers.

- **Modular Code**: The code is organized into separate files, making it easy to manage various aspects, including conversion functions, handling flags, handling field width and precision, and handling unknown format specifiers.

## Custom Specifiers in Action
- %S: Use %S to handle non-printable characters gracefully, ensuring clear representation.
- %r: Print a string in reverse, adding a unique twist to your output.
- %R: Implement ROT13 encoding for your strings, providing a basic form of encryption.
- %C: Handle custom strings in a way that's specific to your application's needs.
- %b: Convert unsigned integers to binary, enabling binary representation.

## Implementation
My custom printf implementation is written in C and adheres to ANSI C standards. The code is designed to be modular, making it easy to extend or modify for your specific requirements.


This comprehensive README template explains the purpose of the custom `printf` implementation and provides an overview of its features.

## To be completed/edited
