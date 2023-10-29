#include "main.h"
/**
 * _abs - prints absolute value of a number
 * @n: function or parameter
 * Return: -n 0r n
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else if (n >= 0)
	{
		return (n);
	}
	return (0);
}
