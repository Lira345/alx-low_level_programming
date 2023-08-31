#include "main.h"

/**
 * get_endianness - Checks big OR little  endians
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int k;
	char *m;

	k = 1;
	m = (char *) &k;
	return ((int)*m);
}
