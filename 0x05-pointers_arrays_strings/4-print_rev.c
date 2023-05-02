#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse
 * @str: string to be printed
 * Return: nothing
 */

void print_rev(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		c++;
	}

	for (c -= 1; c >= 0; c--)
	{
		putchar(str[c]);
	}
	putchar('\n');
}
