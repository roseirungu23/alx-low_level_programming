#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 */

void print_binary(unsigned long int n)
{
	int i, sum = 0;
	unsigned long int now;

	for (i = 63; i >= 0; i--)
	{
		now = n >> i;

		if (now & 1)
		{
			putchar('1');
			sum++;
		}
		else if (sum)
			putchar('0');
	}
	if (!sum)
		putchar('0');
}
