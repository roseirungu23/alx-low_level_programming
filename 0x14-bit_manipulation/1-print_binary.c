#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int now;

	for (i = 63; i >= 0; i--)
	{
		now = n >> i;

		if (now & 1)
		{
			putchar('1');
			count++;
		}
		else if (count)
			putchar('0');
	}
	if (!count)
		putchar('0');
}