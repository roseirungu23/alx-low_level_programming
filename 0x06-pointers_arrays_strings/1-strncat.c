#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings using at most
 * @dest: string to append upon
 * @src: string to append to dest
 * @n: no. of bytes from src to be appended to dest
 * Return: pointer to the resulting string dest
 */

char * (char *, const char *, long unsigned int)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
