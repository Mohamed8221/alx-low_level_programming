#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - multiplies two numbers
* @argc: number of arguments passed to the program
* @argv: array of arguments passed to the program
*
* Return: 0 if successful, 98 if program fails
*/
int main(int argc, char *argv[])
{
long int num1, num2;
long int result;

if (argc != 3)
{
errors();
return (98);
}

if (!is_digit(argv[1]) || !is_digit(argv[2]))
{
errors();
return (98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 *num2;

printf("%ld\n", result);

return (0);
}

/**
* errors - prints an error message
*/
void errors(void)
{
printf("Error\n");
}

/**
* is_digit - checks if a string only contains digits
* @s: string to check
*
* Return: 1 if s only contains digits, else 0
*/
int is_digit(char *s)
{
int i = 0;

while (s[i])
{
if (!isdigit(s[i]))
{
return (0);
}
i++;
}

return (1);
}
