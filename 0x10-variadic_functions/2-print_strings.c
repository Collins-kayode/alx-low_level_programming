#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: is the string to be printed between the strings
 * @n: the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	char *str;

	va_list ptr_str;

	va_start(ptr_str, n);

	for (j = 0; j < n; j++)
	{
	str = va_arg(ptr_str, char *);

	if (str == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", str);
	}
	if (j != (n - 1) && separator != NULL)
	printf("%s", separator);
	}
	printf("\n");
	va_end(ptr_str);
}
