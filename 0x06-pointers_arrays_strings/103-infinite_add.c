#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* infinite_add - adds two numbers
* @n1: first number
* @n2: second number
* @r: buffer that the function will use to store the result
* @size_r: buffer size
*
* Return: pointer to the result, or 0 if result cannot be stored in r
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i = strlen(n1) - 1;
int j = strlen(n2) - 1;
int k = size_r - 2;
int carry = 0;
int sum;

r[size_r - 1] = '\0';

while (i >= 0 || j >= 0 || carry > 0)
{
if (k < 0)
return (0);

sum = carry;
if (i >= 0)
sum += n1[i--] - '0';
if (j >= 0)
sum += n2[j--] - '0';

r[k--] = sum % 10 + '0';
carry = sum / 10;
}

return (&r[k + 1]);
}
