#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int j;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	j = n % 10;
	printf("Last digit of %d ", n);

	if (j > 5)
	{
		printf("is %d and is greater than 5\n", j);
	}
	else if (j == 0)
	{
		printf("is %d and is 0\n", j);
	}
	else if ((j < 6) && (n != 0))
	{
		printf("is %d and is less than 6 and not 0\n", j);
	}
	return (0);
}
