#include "main.h"

/**
 * print_integer - Prints a signed integer
 * @num: The signed integer to print
 * @buffer: The buffer to store the characters
 *
 * Return: The number of characters printed for the integer
 */
int print_integer(int num, char *buffer)
{
	int count = 0;

	if (num < 0)
	{
		if (count < BUFFER_SIZE - 1)
			buffer[count++] = '-';
		else
			write_buffer(buffer, &count);
		num = -num;
	}
	count += print_unsign((unsigned int)num, buffer);
	return (count);
}

