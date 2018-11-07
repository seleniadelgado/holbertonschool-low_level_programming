#include "holberton.h"
/**
 * create_file - function that creates a file.
 * @filename: is the name of the file to create.
 * @text_content: is a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int hello;
	int world;
	int n;

	if (filename == NULL)
		return (-1);
	hello = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (hello == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(hello);
		return (1);
	}
	for (n = 0; text_content[n] != '\0'; n++)
		;
	world = write(STDOUT_FILENO, text_content, n);
	if (world == -1)
		return (-1);
	close(hello);
	return (1);
}
