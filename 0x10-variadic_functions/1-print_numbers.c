#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	unsigned int arr;

	va_list ptr;

	va_start(ptr, n);

	for (j = 0; j < n; j++)
	{
		arr = va_arg(ptr, const unsigned int);
		printf("%d", arr);

	if (j != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
