#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @a: the string to be searched
 * @b: prefix to be measured
 * Return: No. of bytes in a consisting
 * of bytes from b
 */

unsigned int _strspn(char *a, char *b)
{
	unsigned int bytes =  0;
	int i;

	while (*a)
	{
		for (i = 0; b[i]; i++)
			if (*a == b[i])
			{
				bytes++;
				break;
			}
			else if (b[i + 1] == '\0')
				return (bytes);
	}
	a++;
	return (0);
}
