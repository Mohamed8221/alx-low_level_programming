#include <stdio.h>

/**
* SUM - Computes the sum of two numbers.
* @x: The first number.
* @y: The second number.
*
* Description: This macro computes the sum of two numbers, 'x' and 'y'.
*
* Return: The sum of 'x' and 'y'.
*/
#define SUM(x, y) ((x) + (y))

int main() {
int num1 = 5;
int num2 = 7;
int result = SUM(num1, num2);
printf("The sum of %d and %d is %d\n", num1, num2, result);
return (0);
}
