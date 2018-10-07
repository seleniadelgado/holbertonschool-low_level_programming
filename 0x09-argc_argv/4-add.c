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
	int num1 = 0;
	int sum = 0;
	int num2 = 0;

	if (argc != 3)
	{
		printf("0\n");
		return (1);
	}
	for (num1 = 0; num1 < argc; num1++)
		for (num2 = 0; num1 < '\0'; num2++)
		if (!isdigit(argv[num1][num2]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			num1 = atoi(argv[1]);
			num2 = atoi(argv[2]);
			sum = num1 * num2;
			printf("%d\n", sum);
		}
	return (0);
}
