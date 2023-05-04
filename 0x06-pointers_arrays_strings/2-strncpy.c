#include "main.h"
#include <string.h>

/**
 * _strncpy - copies at most an inputted number
 * @dest: the buffer storing the string copy
 * @src: source string
 * @n: number of bytes to copy
 * Return: pointer of the resulting string dest
 */

char *strncpy(char *dest, const char *src,long unsigned int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

			for (index = 0; src[index] && index < (int)n; index++)
				dest[index] = src[index];

	for (index = src_len; index < (int)n; index++)
		dest[index] = '\0';
	return (dest);
}
