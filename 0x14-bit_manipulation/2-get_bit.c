#include "main.h"
#include <stdio.h>

/**
 * get_bit -  returns the value of a bit at a given index
 * @index: index starting from 0
 * @n: No. of searches
 *
 * Return: the value of the bit at index index,
 * or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int result;

	if (index > 54)
		return (-1);

	result = (n >> index) & 1;

	return (result);
}
