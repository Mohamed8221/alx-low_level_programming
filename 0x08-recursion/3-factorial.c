#include "main.h"
/**
* factorial - returns the factorial of a given number
* @n: number to find the factorial of
*
* Return: factorial of the number, or -1 if n is less than 0
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
