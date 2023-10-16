#include "main.h"
/**
* puts_half - Prints half of a string
* @str: The string to print
*
* Return: void
*/
void puts_half(char *str)
{
int length = 0;
int start;

while (str[length] != '\0')
{
length++;
}

if (length % 2 == 1)
{
start = (length - 1) / 2 + 1;
}
else
{
start = length / 2;
}

for (; start < length; start++)
{
_putchar(str[start]);
}

_putchar('\n');
}
