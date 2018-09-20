#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints all natural numbers
 * from n to 98, followed by a new line.
 * @n: parameter for function.
 * Return: Always 0.
 */
void print_to_98(int n)
{
	while (n > 98)
	{
		printf("%d, ",n);
		n--;
	}
	while (n < 98)
	{
		printf("%d, ",n);
		n++;
	}
	printf("98\n");
}
