#include "main.h"

/**
 * print_unsigned - Prints an unsigned integer
 * @num: The unsigned integer to print
 * @buffer: The buffer to store the characters
 *
 * Return: The number of characters printed for the unsigned integer
 */
int print_unsigned(unsigned int num, char *buffer)
{
	int count = 0;

	if (num == 0)
	{
		if (count < BUFFER_SIZE - 1)
			buffer[count++] = '0';
		else
			write_buffer(buffer, &count);
	}
	else
	{
		count += convert_to_decimal(num, buffer);
		reverse_buffer(buffer, count);
	}
	return (count);
}

