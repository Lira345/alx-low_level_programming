#include <stdio.h>

/**
 * main - Prints alphabets in lower cases and uppercases
 * Return: Always 0
 */

int main(void)
{
int lowercase = 'a';
int uppercase = 'A';
while (lowercase < = 'z')
putchar(lowercase);
lowercase + = 1;
while (uppercase < = 'z')
putchar(uppercase);
uppercase + = 1;
putchar('\n');
return (0);
}
