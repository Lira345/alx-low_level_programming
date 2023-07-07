#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main - prints the sum of args positive numbers
* @argc: argument count
* @argv: argument vector
* Return: Always 0
*/

int main(int argc, char *argv[])
{
int k;
unsigned int m, sum = 0;
char *e;

if (argc > 1)
{
for (k = 1; k < argc; k++)
{
e = argv[k];
for (m = 0; m < strlen(e); m++)
{
if (e[m] < 48 || e[m] > 57)
{
printf("Error\n");
return (1);
}
}
sum += atoi(e);
e++;
}
printf("%d\n", sum);
}
else
{
printf("0\n");
}
return (0);
}
