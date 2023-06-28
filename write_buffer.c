#include "main.h"

/**
 * write_buffer - Writes the buffer to the standard output
 * @buffer: The buffer containing the characters to write
 * @count: Pointer to the count of characters in the buffer
 */
void write_buffer(char *buffer, int *count)
{
	if (*count > 0)
	{
		write(1, buffer, *count);
		*count = 0;
	}
}

