#include <stdio.h>

/**
* main - prints the first 98 Fibonacci numbers, starting with 1 and 2.
* Return: Always 0.
*/
int main(void)
{
int a = 1, b = 2;
int count = 2;

_putchar(a + '0');
_putchar(',');
_putchar(' ');
_putchar(b + '0');
_putchar(',');
_putchar(' ');

while (count < 98)
{
int temp = b;
b = a + b;
a = temp;
_putchar(b + '0');
_putchar(',');
_putchar(' ');
count++;
}

_putchar('\n');
return (0);
}
