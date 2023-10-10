#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to get the last digit from.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
int last_digit;
if (n < 0)
n = -n;
last_digit = n % 10;
printf("\n%d%d", last_digit, last_digit);
return last_digit;
}

