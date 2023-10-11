#include "main.h"
/**
 * _abs - prints absolute value of a number
 * @a: function or parameter
 * Return: -a 0r a
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
	{
		return (a);
	}
	return (0);
}
