#include <stdio.h>

/**
 * _strlen -  returns the length of a string.
 * @s: Which length should a atring get
 * Return: The length of the @s
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
