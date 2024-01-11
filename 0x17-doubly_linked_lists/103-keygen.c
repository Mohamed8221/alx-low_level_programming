#include <stdio.h>
#include <string.h>

/**
* main - Entry point
* @argc: Argument count
* @argv: Argument vector
* Return: 0 (Success), or 1 (Error)
*/
int main(int argc, char *argv[])
{
unsigned int i, sum;
size_t len;
char *username;

if (argc != 2)
{
fprintf(stderr, "Usage: %s username\n", argv[0]);
return (1);
}

username = argv[1];
len = strlen(username);

sum = 0;
for (i = 0; i < len; i++)
{
sum += username[i];
}

printf("%u\n", sum ^ 0x3B);

return (0);
}
