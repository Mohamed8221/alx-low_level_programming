#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 99; num1++)
	{
		for (num2 = num1; num2 <= 99; num2++)
		{
			int tens1 = num1 / 10;
			int units1 = num1 % 10;
			int tens2 = num2 / 10;
			int units2 = num2 % 10;

			putchar(tens1 + '0');
			putchar(units1 + '0');
			putchar(' ');
			putchar(tens2 + '0');
			putchar(units2 + '0');

			if (!(num1 == 99 && num2 == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
