#include "operations.h"

/**
* div - divides two integers
* @a: first integer
* @b: second integer
*
* Return: the result of the division, or 0 if b is 0
*/
int div(int a, int b)
{
if (b != 0)
return (a / b);
else
return (0);  /* Handle division by zero */
}
