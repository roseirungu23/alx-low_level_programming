#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers from 0-9
 * Return: Always 0
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + '0');
	}
	putchar('\n');
}
