#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Returns the No of bits needed to flip
 * to get from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int current = n ^ m;
	unsigned int sum = 0;

	while (current != 0)
	{
		if ((current & 1) != 0)
			sum++;
		current >>= 1;
	}

	return (sum);
}
