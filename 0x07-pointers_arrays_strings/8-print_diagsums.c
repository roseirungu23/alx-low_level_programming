#include "main.h"

/**
 * print_diagsums - prints the sum of two diagonals
 * @a: matrix of integers
 * @s: size of the matrix
 */

void print_diagsums(int *a, int s)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < s; i++)
	{
		sum1 += a[i];
		a += s;
	}
	a -= s;

	for (i = 0; i < s; i++)
	{
		sum2 += a[i];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
