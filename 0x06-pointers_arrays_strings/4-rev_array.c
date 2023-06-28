#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: number of elements array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int k;
	int m;

	for (k = 0; k < n--; k++)
	{
		m = a[k];
		a[k] = a[n];
		a[n] = m;
	}
}
