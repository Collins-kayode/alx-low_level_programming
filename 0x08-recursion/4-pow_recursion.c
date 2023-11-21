#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value that raises @y
 * @y: value to be raised
 * Return: -1 if y < 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
	return (1);
	}
	else
	{
	return (x  * _pow_recursion(x, y - 1));
	}
}
