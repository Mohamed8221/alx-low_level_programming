#include "operations.h"

/**
* mod - calculates the remainder of the division of two integers
* @a: first integer
* @b: second integer
*
* Return: the remainder of the division, or 0 if b is 0
*/
int mod(int a, int b)
{
if (b != 0)
return (a % b);
else
return (0);  /* Handle division by zero */
}
