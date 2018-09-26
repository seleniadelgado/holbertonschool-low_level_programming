#include "holberton.h"
#include <stdio.h>

/**
 * print_array - write a function that prints n elements of an array
 * of integers, followed by a new line.
 * @a: parameter used.
 * @n: parameter used.
 */
void print_array(int *a, int n)
{
	int p;

	p = 0;
	while (p < n)
	{
		printf("%d", a[p]);
		p++;
		if (p != n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
