#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if
 * there is one or more chars in the string 'b' that is not 0 or 1
 * and 'b' is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int answer = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		answer = (2 * answer) + (b[i] - '0');
		i++;
	}

	return (answer);
}
