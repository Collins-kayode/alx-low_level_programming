#include "main.h"

/**
 * _strlen - finds length of string
 * @s: string to be counted
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i;
	int count;

	for (i = 0 ; s[i] != '\0'; i++)
		count++;
	return (count);
}
