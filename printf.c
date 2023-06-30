#include "main.h"

/**
 * _printf - Prints formatted output to stdout	
 * @format: Format string
 *
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int chars_printed = 0;

	va_start(args, format);
	if (format == NULL)
		return (0);
	while (*format != '\0')
	{
		if (*format == '%' && *(format +1) != '\0')
		{
			format++;
			chars_printed += check_format(*format, args);
		}
		else
		{
			_putchar(*format);
			chars_printed++;
		}
		format++;
	}
	va_end(args);
	return (chars_printed);
}

