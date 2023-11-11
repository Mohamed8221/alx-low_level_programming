#include "3-calc.h"

/**
* main - performs simple operations
* @argc: number of arguments passed to the program
* @argv: array of arguments passed to the program
*
* Return: 0 if successful, otherwise returns an error code
*/
int main(int argc, char *argv[])
{
int a, b;
int (*op_func)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

a = atoi(argv[1]);
b = atoi(argv[3]);
op_func = get_op_func(argv[2]);

if (op_func == NULL)
{
printf("Error\n");
exit(99);
}

printf("%d\n", op_func(a, b));

return (0);
}
