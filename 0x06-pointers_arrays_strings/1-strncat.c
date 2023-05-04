#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncat - concatenates two strings using at most
 * @dest: string to append upon
 * @src: string to append to dest
 * @n: no. of bytes from src to be appended to dest
 * Return: pointer to the resulting string dest
 */

char *strncat(char *dest, const char *src, long unsigned int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < (int) n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
