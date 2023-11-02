#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* _isdigit - checks if a string only contains digits
* @s: string to check
*
* Return: 0 if s only contains digits, else 1
*/
int _isdigit(char *s)
{
int i = 0;

if (s == NULL)
{
printf("Error\n");
exit(98);
}

while (s[i])
{
if (s[i] < '0' || s[i] > '9')
{
printf("Error\n");
exit(98);
}
i++;
}

return (0);
}

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
printf("Error\n");
exit(98);
}

_isdigit(argv[1]);
_isdigit(argv[2]);

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 *num2;

printf("%ld\n", result);

return (0);
}
