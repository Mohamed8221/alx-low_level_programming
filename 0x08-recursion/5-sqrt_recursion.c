#include "main.h"
/**
* sqrt_check - checks for the square root of c
* @i: guess at sqrt
* @n: number to find sqrt of
*
* Return: -1 or sqrt of c
*/
int _sqrt_check(int i, int n)
{
if (i * i == n)
{
return (i);
}
if (i * i > n)
{
return (-1);
}
return (_sqrt_check(i + 1, n));
}
