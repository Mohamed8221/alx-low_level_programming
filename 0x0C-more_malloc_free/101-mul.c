#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - multiplies two positive numbers
* @argc: argument count
* @argv: argument vector
*
* Return: 0 on success, 98 on error
*/
int main(int argc, char *argv[])
{
int i, j;

if (argc != 3)
{
printf("Error\n");
return (98);
}

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (98);
}
}
}

printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
