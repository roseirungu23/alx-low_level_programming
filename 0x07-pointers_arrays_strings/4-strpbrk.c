#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @a: string to be searched
 * @b: set of bytes to be searched
 * Return: if set is matched - pointer to the matched byte
 * if no set is matched - empty
 */

char *_strpbrk(char *a, char *b)
{
	int i;

	while (*a)
	{
		for (i = 0; b[i]; i++)
		{
			if (*s == b[i])
				return (a);
		}
		a++;
	}
	return ('\0');
}

