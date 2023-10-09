#include <stdio.h>
/**
 * main - Entry point
 * Description: print alphabets in lower  case and thenn upper case
 * Return: 0
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar (n);
		n++;
	}
	while (m <= 90)
	{
		putchar(m);
		n++;
	}
	putchar('\n');
	return (0);
}
