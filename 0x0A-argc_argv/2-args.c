#include "main.h"
#include <stdio.h>

/**
* main - prints all the agrs content
* @agrc: argument count
* @argv: argument vector
* Return: Always 0
*/

int main(int argc, char *argv[])
{
int k;

for (k = 0; k < argc; k++)
{
printf("%s\n", argv[k]);
}
return (0);
}
