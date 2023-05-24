#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - returns the sum of a & b
 * @a: first number
 * @b: second number
 *
 * Return: ..
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference
 * @a: first number
 * @b: second number
 *
 * Return: ..
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a & b
 * @a: first number
 * @b: second number
 *
 * Return: ...
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a & b
 * @a: first number
 * @b: second number
 *
 * Return: ...
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("ERROR\n");
		exit(100);
	}
	return (a / b);

}

/**
 * op_mod - gives the remainder
 * @a: first number
 * @b: second number
 *
 * Return: ..
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("ERROR\n");
		exit(100);
	}

	return (a % b);
}
