#include <stdio.h>
#include "holberton.h"

/**
 * main - a program that prints the number of arguments passed to it.
 * Return: 0;
 * @argc: parameter used.
 * @argv: parameter used.
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
