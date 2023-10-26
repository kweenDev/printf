#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/* Main Function Prototype */
int _printf(const char *format, ...);

/* Custom Function Prototypes */

/* basic_specifiers.c */
int printCharacter(va_list args);
int printString(va_list args);
int printPercent(va_list args);
int processBasicSpecifier(char specifier, va_list args);
/* ------------------------------------------------------ */
/* print_binary.c */
int printBinary(va_list args);
/* ------------------------------------------------------ */
/* print_unsigned_int.c */
int printOctal(va_list args);
int printHexLower(va_list args);
int printHexUpper(va_list args);
/* ------------------------------------------------------ */
/* flags.c */
int handlePlusFlag(va_list args, int num);
int handleSpaceFlag(va_list args, int num);
int handleAlternativeFormFlag(va_list args, int specifier);
int processFlags(const char *flags, char specifier, va_list args, int number);
/* ------------------------------------------------------ */
/* flush_buffer.c */
int flushBuffer(int count);
int addToBuffer(const char *string, int length);
/* ------------------------------------------------------ */
/* length_modifiers.c */
long long applyLengthModifiers(char specifier, va_list args);
/* ------------------------------------------------------ */
/* print_field_width.c */
int applyFieldWidth(int width, char specifier, int length);
/* ------------------------------------------------------ */
/* print_precision.c */
int applyPrecision(int precision, char *string);
int applyNumericPrecision(int precision, long long num, char specifier);
/* ------------------------------------------------------ */
/* handle_zero_flag.c */
int applyZeroFlag(int width, char specifier, int length);
/* ------------------------------------------------------ */
/* handle_minus_flag.c */
int applyMinusFlag(int width, int length);
/* ------------------------------------------------------ */
/* print_custom_S.c */
int applyCustomS(char *string);
/* ------------------------------------------------------ */
/* print_custom_r.c */
int applyCustomR(const char *string);
/* ------------------------------------------------------ */
/* print_custom_R.c */
int applyCustomROT13(const char *string);

#endif /* MAIN_H */
