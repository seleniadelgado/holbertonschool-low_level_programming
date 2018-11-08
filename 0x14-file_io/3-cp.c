#include "holberton.h"
/**
 * main - function that copies the content of a file to another file.
 * @argc: parameter used for arguments.
 * @argv: arguments passed.
 * Return: copied file.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, runner, text, lamp, garage, door;
	char pbuffer[1024];

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to");
			exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		openfail(argv[1]);
	for (runner = 0; pbuffer[runner] != '\0'; runner++)
		;
	text = read(file_from, pbuffer, 1024);
	if (text == -1)
		openfail(argv[1]);
	file_to = open(argv[2], O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(98);
	}
	lamp = write(file_to, pbuffer, text);
	if (lamp == -1)
		writefail(argv[2]);
	garage = close(file_to);
	if (garage == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %i\n", garage);
		exit(100);
	}
	door = close(file_from);
	if (door == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %i\n", door);
		exit(100);
	}
	return (0);
}
/**
 * openfail - prints string and exits if open fails.
 * @s: parameter of type char passed to the function for printing.
 */
void openfail(char *s)
{
	dprintf(STDOUT_FILENO, "Error: Can't read ");
	dprintf(STDOUT_FILENO, "from file %s\n", s);
	exit(98);
}
/**
 * writefail - prints string and exits if write fails.
 * @s: parameter of type char passed to the function.
 */
void writefail(char *s)
{
	dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", s);
	exit(99);
}
