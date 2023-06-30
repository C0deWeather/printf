#include "main.h"

/**
 * check_format - checks format specifier
 * @c: format specifier
 * @ap: va_list variable
 *
 * Return: returns number of char printed
 */
int check_format(char c, va_list ap)
{
	int chars_printed = 0;
	char *s = NULL;

	switch (c)
	{
		case 'c':
			chars_printed += _putchar(va_arg(ap, int));
			break;
		case 's':
			s = va_arg(ap, char *);
			chars_printed += _puts(s);
			break;
		case '%':
			chars_printed += _putchar('%');
			break;
		case 'i':
		case 'd':
			chars_printed += print_num(va_arg(ap, int));
			break;
		default:
			_putchar('%');
			_putchar(c);
			chars_printed += 2;
			break;
	}
	va_end(ap);
	return (chars_printed);
}

