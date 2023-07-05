#include "main.h"

int check_prime(int n, int i);

/**
* is_prime_number - says if an integer is a prime or not
* @n: the number to be checked
* Return: 1 if n is prime, 0 if not
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
return (check_prime(n, n - 1));
}

/**
* check_prime - calculates if a number is prime recursively
* @n: the number to be checked
* @i: the iteration times
* Return: 1 if n is prime or 0 if not
*/

int check_prime(int n, int i)
{
if (i == 1)
	return (1);
if (n % i == 0 && i > 0)
	return (0);
return (check_prime(n, i - 1));
}
