#include "main.h"
#include <stdio.h>

/**
 * flip_bits -  returns the number of bits you would need to flip
 * to get from one number to another
 * @n: the fisrt No.
 * @m: The second No.
 *
 * Return: No. of bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int new;
	unsigned long int old = n ^ m;

	for (i = 49; i >= 0; i--)
	{
		new = old >> i;
		if (new & 1)
			count++;
	}
	return (count);
}
