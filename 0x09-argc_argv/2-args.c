#include <stdio.h>
#include "holberton.h"

/**
 * main - print arguments received onto a new line each time.
 * Return: 0.
 * @argc: parameter used.
 * @argv: parameter used.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
