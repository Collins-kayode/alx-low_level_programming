#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: get  the last digit
 * Return: 0
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = (n % 10);

	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greateer than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ld);
	}
	else if (ld < 6 && ld != 0)
	{
		printf("Last digit of %d is %d and less than 6 and 0\n", n, ld);
	}
	return (0);
}
