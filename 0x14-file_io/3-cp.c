#include "holberton.h"
/**
 * main - function that copies the content of a file to another file.
 * @argc: parameter used for arguments.
 * @argv: arguments passed.
 * Return: copied file.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, text, lamp, garage, door;
	char *pbuffer = NULL;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		openfail(argv[1]);
	pbuffer = malloc(1024);
	if (pbuffer == NULL)
		return (-1);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		openfail(argv[2]);
	while ((text = read(file_from, pbuffer, 1024)) != 0)
	{
		if (text == -1)
			openfail(argv[1]);
		lamp = write(file_to, pbuffer, text);
		if (lamp == -1)
			writefail(argv[2]);
		if (lamp == 1024)
			{
			free(pbuffer);
		pbuffer = malloc(1024);
			if (pbuffer == NULL)
				return (-1);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
		if (file_to == -1)
			openfail(argv[2]);
			}
	}
	garage = close(file_to);
	if (garage == -1)
		closefail(garage);
	door = close(file_from);
	if (door == -1)
		closefail(door);
	free(pbuffer);
	return (0);
}
/**
 * openfail - prints string and exits if open fails.
 * @s: parameter of type char passed to the function for printing.
 */
void openfail(char *s)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
	exit(98);
}
/**
 * writefail - prints string and exits if write fails.
 * @s: parameter of type char passed to the function.
 */
void writefail(char *s)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
	exit(99);
}
/**
 * closefail - prints string and exits if open fails.
 * @n: parameter of type char passed to the function for printing.
 */
void closefail(int n)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", n);
	exit(100);
}
