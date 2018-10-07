#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * main - function that multiplies two numbers.
 * Return: 0.
 * @argv: parameter used.
 * @argc: parameter used.
 */
int main(int argc, char *argv[])
{
	int num1;
	int result;
	int num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
	}
	return (0);
}
