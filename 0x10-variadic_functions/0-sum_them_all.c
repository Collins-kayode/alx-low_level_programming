#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - give the sum of all its parameters
 * @n: number of argument that would be passed to the sum
 * Return: 0 if n == o
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int j;

	va_list holder;
	va_start(holder, n);
	for (j = 0; j < n; j++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(holder, const unsigned int);
		}
	}
	va_end(holder);
	return (sum);
}
