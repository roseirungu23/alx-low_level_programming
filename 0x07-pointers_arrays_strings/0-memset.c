#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @a: memory to be filled
 * @b: char to copy
 * @n: number of times to copy b
 * Return: pointer to the memory area a
 */

char *_memset(char *a, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		a[i] = b;
	}
	return (a);
}
