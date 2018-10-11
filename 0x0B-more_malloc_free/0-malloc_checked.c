#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked a functiont that allocates memory using malloc.
 *
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
