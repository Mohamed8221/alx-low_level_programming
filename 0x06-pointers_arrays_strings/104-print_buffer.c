#include "main.h"
#include <stdio.h>

/**
* print_buffer - prints a buffer
* @b: buffer
* @size: size of the buffer
*
* Return: Nothing.
*/
void print_buffer(char *b, int size)
{
int i, j;

for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);

for (j = 0; j < 10; j++)
{
if (i + j < size)
printf("%02x", b[i + j]);
else
printf("  ");

if (j % 2)
putchar(' ');
}

for (j = 0; j < 10; j++)
{
if (i + j < size)
{
if (b[i + j] < 32 || b[i + j] > 126)
putchar('.');
else
putchar(b[i + j]);
}
}

putchar('\n');
}

if (size <= 0)
putchar('\n');
}
