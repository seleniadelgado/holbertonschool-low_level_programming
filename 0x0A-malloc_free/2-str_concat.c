#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - function that concatenates two strings.
 * @s1: parameter used.
 * @s2: parameter used.
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int x;
	int y;
	char *ptr;
	int index;
	int index2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (x = 0; s1[x] != '\0'; x++)
		;
	for (y = 0; s2[y] != '\0'; y++)
		;
	ptr = malloc(sizeof((char) x + y) + 1);
	if (ptr == NULL)
		return (NULL);
	for (index = 0; s1[index] != '\0'; index++)
		ptr[index] = s1[index];
	for (index2 = 0; s2[index2] != '\0'; index2++)
	{
		ptr[index++] = s2[index2];
	}
	ptr[index] = '\0';
	return (ptr);
}
