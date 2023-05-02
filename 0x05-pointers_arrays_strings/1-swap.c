#include <stdio.h>

/**
 * swap_int - swaps values of two integers
 * @a: first int to be swapped
 * @b: second int to be swapped
 * Return: Empty
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
