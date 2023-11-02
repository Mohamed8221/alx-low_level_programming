#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* is_number - checks if a string is a number
* @s: string to check
*
* Return: 0 if s is a number, else 1
*/
int is_number(char *s)
{
int i = 0;

while (s[i])
{
if (!isdigit(s[i]))
return (1);
i++;
}

return (0);
}

/**
* main - multiplies two positive numbers
* @argc: argument count
* @argv: argument vector
*
* Return: 0 on success, 98 on error
*/
int main(int argc, char *argv[])
{
long num1, num2, product;

if (argc != 3 || is_number(argv[1]) || is_number(argv[2]))
{
printf("Error\n");
return (98);
}

num1 = atol(argv[1]);
num2 = atol(argv[2]);
product = num1 *num2;

printf("%ld\n", product);

return (0);
}
