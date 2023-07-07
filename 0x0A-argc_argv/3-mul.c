#include <stdio.h>
#include <stdlib.h>
/**
* main - prints multiplication
*of two numbers
*@argc: number of arguments
*@argv: array of arguments
*Return: returns 0
*/

int main(int argc, char *argv[])
{
	int k, m, mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	k = atoi(argv[1]);
	m = atoi(argv[2]);
	mul = k * m;

	printf("%d\n", mul);
	return (0);
}
