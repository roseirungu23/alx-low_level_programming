#include "main.h"
#include <stdio.h>

/**
<<<<<<< HEAD
 * print_number - prints an integer
 * @n: The integer to be printed
 * Return: nothing
 */

void print_numbers(int n)
=======
 * print_number - prints an int
 * @n: the int to be printed
 * Return: empty
 */

void print_number(int n)
>>>>>>> c58c20fc14e84ffb5e115ea6be38d9a2f02c09b2
{
	unsigned int k = n;

	if (n < 0)
	{
		n *= -1;
		k = n;
<<<<<<< HEAD
		putchar('-');
	}
	k /= 10;
	if (k != 0)
		print_numbers(k);
	putchar((unsigned int) n % 10 + '0');
	putchar ('\n');
}
=======
		putchar("-");
	}
	k /= 10;
	if (k != 0)
		print_number(k);
	putchar((unsigned int) n % 10 + '0');
}
				
>>>>>>> c58c20fc14e84ffb5e115ea6be38d9a2f02c09b2
