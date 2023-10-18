#include "main.h"
/**
* print_number - prints an integer
* @n: integer to print
*
* Return: Nothing.
*/
void print_number(int n)
{
unsigned int m;
if (m < 0)
{
m = -n;
_putchar('-');
}
else
{
m = n;
}
if (m / 10)
{
print_number(m / 10);
}

_putchar((m % 10) + '0');
}
