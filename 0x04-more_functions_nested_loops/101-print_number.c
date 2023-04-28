#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: The integer to be printed
 * Return: nothing
 */

void print_numbers(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		n *= -1;
		k = n;
		putchar('-');
	}
	k /= 10;
	if (k != 0)
		print_numbers(k);
	putchar((unsigned int) n % 10 + '0');
	putchar ('\n');
}
