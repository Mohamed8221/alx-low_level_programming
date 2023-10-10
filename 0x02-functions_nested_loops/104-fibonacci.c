#include <stdio.h>

/**
* main - prints the first 98 Fibonacci numbers, starting with 1 and 2.
* Return: Always 0.
*/
int main(void)
{
int count;
unsigned long i = 0, j = 1, sum;

for (count = 0; count < 98; count++)
{
sum = i + j;
printf("%lu", sum);

i = j;
j = sum;

if (count == 97)
{
printf("\n");
}
else
{
printf(", ");
}
}

return (0);
}
