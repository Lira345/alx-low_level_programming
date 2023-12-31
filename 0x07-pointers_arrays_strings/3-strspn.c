#include "main.h"

/**
 *  _strspn - Entry point
 *  @s: input
 *  @accept: input
 *  Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int k, n, value, check;

	value = 0;
	for (k = 0; s[k] != '\0'; k++)
	{
		check = 0;
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[k])
			{
				value++;
				check = 1;
			}
		}
		if (check == 0)
			return (value);
	}
	return (value);
}
