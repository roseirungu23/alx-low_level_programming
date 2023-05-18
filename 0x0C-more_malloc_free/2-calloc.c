#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @x: no. of members
 * @size: size
 *
 * Return: 0
 */

void *_calloc(unsigned int x, unsigned int size)
{
	int i = 0, l = 0;
	char *p;

	if (x == 0 || size == 0)
		return (NULL);

	l = x * size;
	p = malloc(l);

	if (p == NULL)
		return (NULL);
	while (i < l)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
