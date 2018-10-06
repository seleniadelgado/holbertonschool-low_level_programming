#include <stdio.h>
#include "holberton.h"

/**
 * _whatsmyname - print name.
 * Return: 0.
 * @argc: parameter used.
 * @argv: parameter used.
 */
int _whatsmyname(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%c%s\n", argc, argv[i]);
	}
	return (0);
}
