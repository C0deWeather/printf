#include "main.h"

/**
 * parse_num - parses number into an array of its digits
 * @n: input number
 *
 * Return: returns pointer to array, otherwise NULL.
 */
number parse_num(int n)
{
	number num;
	int *buffer;
	int result = 0;
	int temp;

	num.size = 0;
	num.sign = 0;
	
	if (n < 0)
	{
		num.sign = 1;
		n *= -1;
	}

	/*Calculate number of digits in n*/
	temp = n;
	while (temp)
	{
		temp /= 10;
		num.size++;
	}
	
	/*Allocate memory for int array and check success*/
	num.array = malloc(sizeof(int) * num.size);
	if (num.array == NULL)
		exit(1);
		
	buffer = num.array;
	while (n != 0)
	{
		result = n % 10;
		*buffer = result;
		n /= 10;
		buffer++;
	}
	return (num);

}
