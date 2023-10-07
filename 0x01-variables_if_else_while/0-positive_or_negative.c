#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf_s("%d is positive", n);
	}
	else if (n == 0)
	{
		printf_s("%d is zero", n);
	}
	else
	{
		printf_s("%d is negative", n);

	}
	return (0);
}
