#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - function that allocates memory using malloc.
 * @b: parameter b to be tested as float, char, or int.
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
}
