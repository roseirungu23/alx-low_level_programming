#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns sum of all parametaers
 * @n: number of parameters
 * @...: number of variableto calculate
 *
 * Return: 0 if n ==o
 * otherwise the sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
