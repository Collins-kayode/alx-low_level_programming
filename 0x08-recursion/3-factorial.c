#include "main.h"
#include <stdio.h>

/**
 * factorial - a function that returns the factorial of a given number
 * @n: number to be printed in factorial
 * Return: -1 if n < 0
 */

int factorial(int n)
{
	if (n < 0)
	{return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
