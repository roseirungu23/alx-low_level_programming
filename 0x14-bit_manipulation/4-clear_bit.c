#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * index: index of the bit to clear
 * @n: pointer to the changed number
 *
 * Return: 1 if it works, or -1 if it fails
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 49)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
