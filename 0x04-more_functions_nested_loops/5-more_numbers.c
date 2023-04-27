#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print 10 times numbers from 0-14
 * Return: 10 times numbers from 0-14
 */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
			{
				putchar(y / 10 + '0');
			}
			putchar(y % 10 + '0');
		}
		putchar('\n');
	}
}
