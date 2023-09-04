#include "main.h"

/**
 * append_text_to_file - function that appends at the end of a file.
 *
 * @filename: name of the file
 *
 * @text_content: Pointer to the null terminated string to
 *		be appended to the file
 * Return: 1 on sucesss, -1 if unsuccesful
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, k;
	size_t len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (k = 0; text_content[k] != '\0'; k++)
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);
	return (1);
}
