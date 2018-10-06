#include <stdio.h>
#include "holberton.h"

/**
 * main - print name.
 * Return: 0.
 * @argc: parameter used.
 * @argv: parameter used.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%c%s\n", argc, argv[i]);
	}
	return (0);
}
