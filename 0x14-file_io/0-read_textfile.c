#include "holberton.h"
/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * standard output.
 * @filename: name of file being read.
 * @letters: numbers of letters read and printed.
 * Return: returns files.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int buff;
	char *pbuffer;
	int fd;
	int poem;

	if (filename == NULL)
		return (0);
	pbuffer = malloc(sizeof(char) * letters);
		if (pbuffer == NULL)
			return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	buff = read(fd, pbuffer, letters);
	if (buff == -1)
		return (0);
	poem = write(STDOUT_FILENO, pbuffer, buff);
	if (poem == -1)
		return (0);
	close(fd);
	free(pbuffer);
	return (poem);
}
