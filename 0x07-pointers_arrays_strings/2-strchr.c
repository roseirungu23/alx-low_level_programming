#include "main.h"

/**
 * _strchr - locates a character in a string
 * @a: string to be searched
 * @b: character to be located
 * Return: if b is found - a pointer to the first
 * if b is not found - empty
 */

char *_strchr(char *a, char b)
{
	int i;

	for (i = 0; a[i] >= '\0'; i++)
	{
		if (a[i] == b)
			return (a + i);
	}
	return ('\0');
}
