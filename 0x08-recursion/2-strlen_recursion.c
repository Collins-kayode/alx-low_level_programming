#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - finds the length of a string
 * @s : string to find it's lenghth
 * Return : length of string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
