#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - function that concatenates all the arguments of your program.
 * @ac: parameter used to hold the number of arguments.
 * @av: strings of arguments that were passed in.
 * Return: t.
 */
char *argstostr(int ac, char **av)
{
	int a;
	int b;
	char *t;
	int index;
	int c = 0;

	index = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			;
		(c = c + b);
	}
	t = malloc(sizeof(char) * (ac + c + 1));
	if (t == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++, index++)
			t[index] = av[a][b];
		t[index] = '\n';
		(index = index + 1);
	}
	return (t);
}
 /**
 * for loop								\
 * av is a big array [a] look through av[a] to know what to put in it.
 * b is the smaller
 */
