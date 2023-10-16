#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* puts_half - Prints second half of a string
* @str: The string to be printed
*
* Return: void
*/
void puts_half(char *str)
{
int len = strlen(str);
int n = len / 2;

if (len % 2 != 0)
n = (len - 1) / 2;

for (int i = n; i < len; i++)
putchar(str[i]);

putchar('\n');
}
