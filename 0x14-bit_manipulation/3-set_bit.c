#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @index: index of the bit you want to set to 1
 *
 * Return: 1 if it works, or -1 if fails
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 49)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
