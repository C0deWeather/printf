#include "main.h"

/**
 * _printf - Custom printf function
 * @format: The format string
 * @...: Variable number of arguments
 *
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	char buffer[BUFFER_SIZE];
	int count = 0; /* Counter for the number of characters printed */

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++; /* Move past the '%' */
			count += handle_conversion_specifier(format, args, buffer);
		}
		else
		{
			if (count < BUFFER_SIZE - 1)
				buffer[count++] = *format;
			else
				write_buffer(buffer, &count);
		}

		format++; /* Move to the next character in the format string */
	}

	/* Write any remaining characters in the buffer */
	write_buffer(buffer, &count);

	va_end(args);
	return (count);
}

