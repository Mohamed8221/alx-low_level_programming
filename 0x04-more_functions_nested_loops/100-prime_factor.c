#include <stdio.h>

/**
* main - prints the largest prime factor of 612852475143
* Return: Always 0 (Success)
*/
int main(void)
{
long num = 612852475143;
long largest_prime = -1;
int i;


while (num % 2 == 0)
{
largest_prime = 2;
num /= 2;
}


for (i = 3; i * i <= num; i += 2)
{
while (num % i == 0)
{
largest_prime = i;
num /= i;
}
}


if (num > 2)
largest_prime = num;

printf("%ld\n", largest_prime);

return (0);
}
