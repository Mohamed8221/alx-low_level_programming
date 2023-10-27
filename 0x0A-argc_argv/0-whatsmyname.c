#include <stdio.h>

/**
* main - Prints the program name
* @argc: The number of command line arguments
* @argv: The command line arguments
*
* Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
if (argc > 0)
{
printf("%s\n", argv[0]);
}
return (0);
}
