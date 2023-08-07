#include "main.h"

/**
 * read_textfile - Function reads a text file and prints it
 *		to the POSIX standard output
 *
 * @filename: filename
 *
 * @letters: number of letters to print
 *
 * Return: the number of letters that was printed if succesful
 *	otherwise 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int r, w;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	r = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (w);
}

