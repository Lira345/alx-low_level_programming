#include <stdio.h>
/**
*main - prints the sum of the fibonacci numbers less than 400000
*Rerurn: Notging!
*/

int main(void)
{
int i = 0;
long j = 1, k = 2, sum = k;

while (k + j < 4000000)
{
k += j;
if (k % 2 == 0)
sum += k;
++i
}
printf("%ld\n", sum);
return (0);
}
