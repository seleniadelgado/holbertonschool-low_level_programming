#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main (void)
{
	int x;

	for(x = 1; x < 100; x++)
	{
		printf("%d ", x);
	}
	if (x % 15)
		{
			printf("Fizz ");
		}
	else if (x % 3)
		{
			printf("Buzz ");
		}
	else if (x % 5)
		{
			printf("FizzBuzz ");
		}
	}
	printf("\n");
	return (0);
}
