#include "main.h"

/**
 * print_string - Prints a string
 * @str: The string to print
 * @buffer: The buffer to store the characters
 *
 * Return: The number of characters printed for the string
 */
int print_string(const char *str, char *buffer)
{
	int count = 0;

	while (*str != '\0')
	{
		if (count < BUFFER_SIZE - 1)
			buffer[count++] = *str;
		else
			write_buffer(buffer, &count);
		str++;
	}
	return (count);
}

