#include <stdio.h>
/**
* main - prints the first 52 fibonacci numbers
* Return: Nothing!
*/

int main(void)
{
int m = 0;
long n = 1, s = 2;

while (m < 50)
{
if (m == 0)
printf("%ld", n);
else if (m == 1)
printf(", %ld", s);
else
{
s += n;
n = s - n;
printf(", %ld", s);
}
m++;
}
printf("\n");
return (0);
}
