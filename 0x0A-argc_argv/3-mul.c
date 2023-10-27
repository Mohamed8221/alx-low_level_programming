#include <stdio.h>
#include <stdlib.h>

/**
* main - Multiplies two numbers
* @argc: The number of command line arguments
* @argv: The command line arguments
*
* Return: 0 (Success), or 1 (Error)
*/
int main(int argc, char *argv[])
{
int num1, num2, product;

if (argc != 3)
{
printf("Error\n");
return (1);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
product = num1 *num2;

printf("%d\n", product);

return (0);
}
