#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
void write_buffer(char *buffer, int *count);
int handle_conversion_specifier(const char *specifier, va_list args, char *buffer);
int print_string(const char *str, char *buffer);
int print_integer(int num, char *buffer);
int print_unsign(unsigned int num, char *buffer);
int print_octal(unsigned int num, char *buffer);
int print_hex(unsigned int num, int uppercase, char *buffer);
int convert_to_decimal(unsigned int num, char *buffer);
int convert_to_octal(unsigned int num, char *buffer);
int convert_to_hex(unsigned int num, char *buffer, int uppercase);
void reverse_buffer(char *buffer, int length);
int print_string_special(const char *str, char *buffer);
int print_special_char(char ch, char *buffer);

#endif /* MAIN_H */

