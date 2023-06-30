#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes a character to the standard output
 *
 * @c: the character to write
 *
 * Return: On success, returns the number of characters
 * written. On failure, returns -1.
 */
int _putchar(char c)
{	
	return (write(1, &c, 1));
}

/**
 * print_num - prints a signed number
 * @n: input number
 * Return: returns number of char printed, 0 otherwise.
 */
int print_num(int n)
{
	number num = parse_num(n);
	int len = num.size;

	if (num.array == NULL)
		return (0);
	if (num.sign == 1)
		_putchar('-');
	while (num.size > 0)
	{
		_putchar(num.array[num.size - 1] + '0');
		num.size--;
	}
	free(num.array);
	return (len);
}

/**
 * _puts - prints input string followed by a newline to output
 * @str: input string
 * Return; number char printed
 */

int _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	return (len);
}

