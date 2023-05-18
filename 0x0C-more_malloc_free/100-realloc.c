#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer address
 * @x: old size
 * @y: new size
 *
 * Return: ..
 */

void *_realloc(void *ptr, unsigned int x, unsigned int y)
{
	char *nptr;
	unsigned int i;

	if (y == x)
		return (ptr);

	if (ptr == NULL)
	{
		nptr = malloc(y);
		if (nptr == NULL)
			return (NULL);
		return (nptr);
	}
	else
	{
		if (y == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	nptr = malloc(y);

	if (nptr == NULL)
		return (NULL);
	for (i = 0; i < x && i < y; i++)
	{
		nptr[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (nptr);
}
