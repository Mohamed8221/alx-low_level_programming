#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* multiply - Multiplies two numbers
* @num1: The first number
* @num2: The second number
*
* Return: The product of the two numbers
*/
int multiply(int num1, int num2)
{
return (num1 * num2);
}

/**
* isPositiveNumber - Checks if a string consists of only digits
* @str: The string to check
*
* Return: 1 if the string is a positive number, 0 otherwise
*/
int isPositiveNumber(char *str)
{
while (*str)
{
if (!isdigit(*str))
{
return (0);
}
str++;
}
return (1);
}

/**
* main - Entry point of the program
* @argc: The number of command line arguments
* @argv: An array of command line argument strings
*
* Return: 0 on success, 98 on error
*/
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (98);
}

char *num1Str = argv[1];
char *num2Str = argv[2];

if (!isPositiveNumber(num1Str) || !isPositiveNumber(num2Str))
{
printf("Error\n");
return (98);
}

int num1 = atoi(num1Str);
int num2 = atoi(num2Str);

int result = multiply(num1, num2);
printf("%d\n", result);

return (0);
}
