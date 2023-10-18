#include "main.h"
/**
 * print_number - Prints an integer
 * @n: The integer to print
 */
void print_number(int n)
{
	int divisor = 1;
	int num_digits;
	int i;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while ((n / divisor) >= 10)
	{
		divisor *= 10;
	}

	num_digits = divisor;

	while (divisor != 0)
	{
		_putchar((n / divisor) % 10 + '0');
		divisor /= 10;
	}

	_putchar('\n');
}
