#include <stdio.h>
/**
* fibonacci - Prints the first 98 Fibonacci numbers.
*/
void main(void)
{
int a = 1, b = 2;
int count = 2;

putchar(a + '0');
putchar(',');
putchar(' ');
putchar(b + '0');
putchar(',');
putchar(' ');

while (count < 98)
{
int temp = b;
b = a + b;
a = temp;
putchar(b + '0');
putchar(',');
putchar(' ');
count++;
}

putchar('\n');

return (0);
}
