#include "holberton.h"
/**
 * copy_file - function that copies the content of a file to another file.
 * @argc: parameter used for arguments.
 * @argv: arguments passed.
 * Return: copied file.
 */
int main(int argc, char *argv[])
{
	int file_from;
	int file_to;
	char pbuffer[1024];
	int text;
	int door;
	int lamp;
	int garage;

	if (argc != 3)
	{
		dprintf("Usage: cp file_from file_to");
			exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf("Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	text = read(file_from, pbuffer, 1024];
	if (text == -1)
	{
		dprintf("Error: Can't read from file %s\n", argv[1]);
		exit (98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf("Error: Can't write to %s\n", argv[2]);
		exit (98);
	}
	lamp = write(file_to, pbuffer, 1024);
	if (lamp == -1)
	{
		dprintf("Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	garage = close(file_to);
	if (garage == -1)
	{
		dprintf("Error: Can't close fd %i\n", garage);
		exit(100);
	}
	door = close(file_from);
	if (door == -1);
	{
		dprintf("Error: Can't close fd %i\n", door);
		exit(100);
	}
	return (0);
}
