#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - function that creates an array of integers
 * @min: minimun numbers.
 * @max: maximun numbers
 * Return: pointer.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int index;
	int index2;

	if (min > max)
		return (NULL);
	index2 = (max - min + 1);
	ptr = malloc(sizeof(int) * index2);
	if (ptr == NULL)
		return (NULL);
	for (index = 0; index < index2; index++, min++)
		ptr[index] = min;
	return (ptr);
}
