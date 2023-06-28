#include "main.h"

/**
 * handle_conversion_specifier - Handles the conversion specifier
 * @specifier: The conversion specifier
 * @args: The variable argument list
 * @buffer: The buffer to store the characters
 *
 * Return: The number of characters printed for the
 * conversion specifier
 */
int handle_conversion_specifier(const char *specifier,
		va_list args, char *buffer)
{
	switch (*specifier)
	{
		case 'c':
			if (*buffer < BUFFER_SIZE - 1)
				buffer[(*buffer)++] = va_arg(args, int);
			else
				write_buffer(buffer, buffer);
			return (1);
		case 's':
			return (print_string(va_arg(args, const char*), buffer));
		case 'd':
		case 'i':
			return (print_integer(va_arg(args, int), buffer));
		case 'u':
			return (print_unsign(va_arg(args, unsigned int), buffer));
		case 'o':
			return (print_octal(va_arg(args, unsigned int), buffer));
		case 'x':
			return (print_hex(va_arg(args, unsigned int), 0, buffer));
		case 'X':
			return (print_hex(va_arg(args, unsigned int), 1, buffer));
		case 'S':
			return (print_string_special(va_arg(args, const char*), buffer));
		case '%':
			if (*buffer < BUFFER_SIZE - 1)
				buffer[(*buffer)++] = '%';
			else
				write_buffer(buffer, buffer);
			return (1);
		default:
			return (0);
	}
}

