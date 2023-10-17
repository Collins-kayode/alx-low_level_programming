#include "main.h"

/**
 * swap_int - function thst swaps two parameter
 * @a: function parameter
 * @b: function parameter
 * Return: void
 */

void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
