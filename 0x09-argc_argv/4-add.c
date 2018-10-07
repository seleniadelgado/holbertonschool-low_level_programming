#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <ctype.h>

/**
 * main - program that adds positive integers.
 * Return: 0.
 * @argv: parameter used.
 * @argc: parameter used.
 */
int main(int argc, char *argv[])
{
	int num1, sum = 0, num2, a;

	for (num1 = 1; num1 < argc; num1++)
	{
		for (num2 = 0; argv[num1][num2] != '\0'; num2++)
		{
			if (!isdigit(argv[num1][num2]))
			{
				printf("Error\n");
				return (1);
			}
		}
		a = atoi(argv[num1]);
		sum += a;
	}
	printf("%d\n", sum);
	return (0);
}
