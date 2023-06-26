#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: The first integer to be swamped
 * @b: The second integer to be swamped
 * Return: nothing!
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
