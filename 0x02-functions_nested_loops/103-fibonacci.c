#include <stdio.h>

/**
* main - prints the sum of the even-valued Fibonacci terms not exceeding
* 4,000,000.
* Return: Always 0.
*/
int main(void)
{
long int i = 1, j = 2, sum = 0;

while (i <= 4000000 && j <= 4000000)
{
if (i % 2 == 0)
sum += i;

if (j % 2 == 0)
sum += j;

i = i + j;
j = i + j;
}

printf("%ld\n", sum);

return (0);
}
