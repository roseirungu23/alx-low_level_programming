#include "main.h"
#include <stdio.h>

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to extract the bit from.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value of the bit at index 'index' or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bvalue;

	if (index > 63)
		return (-1);

	bvalue = (n >> index) & 1;
	return (bvalue);
}
