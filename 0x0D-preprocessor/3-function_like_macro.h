#include <stdio.h>

/**
* ABS - Computes the absolute value of a number.
* @x: The number for which to calculate the absolute value.
*
* Description: This macro computes the absolute value of a number 'x'.
*
* Return: The absolute value of 'x'.
*/
#define ABS(x) ((x < 0) ? -(x) : (x))

int main() {
int num = -5;
int abs_num = ABS(num);
printf("The absolute value of %d is %d\n", num, abs_num);
return (0);
}
