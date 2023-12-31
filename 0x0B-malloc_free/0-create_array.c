#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array or char and initialize it with a char
 * @size: the size of the array to be created.
 * @c: the character to store
 *
 * Return: a pointer to char
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int k;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(c) * size);

	if (s == NULL)
		return (NULL);
	for (k = 0; k < size; k++)
		s[k] = c;

	return (s);
}
