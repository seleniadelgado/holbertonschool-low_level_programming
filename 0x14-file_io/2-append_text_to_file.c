#include "holberton.h"
/**
 * append_text_to_file - write a function that appends text at the end of a
 * file.
 * @filename: name of the file.
 * @text_content: null terminated string to add at the end of the file.
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int lincoln;
	int hat;
	int runner;

	if (filename == NULL)
		return (-1);
	lincoln = open(filename, O_WRONLY | O_APPEND);
	if (lincoln == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(lincoln);
		return (1);
	}
	for (runner = 0; text_content[runner] != '\0'; runner++)
		;
	hat = write(lincoln, text_content, runner);
	if (hat == -1)
		return (-1);
	close(lincoln);
	return (1);
}
