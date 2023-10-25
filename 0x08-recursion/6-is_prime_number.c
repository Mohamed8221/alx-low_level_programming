#include "main.h"
/**
* check_prime - checks for prime number
* @n: number to check
* @i: possible factor of number
*
* Return: 1 if prime, 0 otherwise
*/
int check_prime(int n, int i)
{
if (n % i == 0)
{
return (0);
}
if (i > n / 2)
{
return (1);
}
return (check_prime(n, i + 1));
}
