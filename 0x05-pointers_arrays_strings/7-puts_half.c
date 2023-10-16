#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* puts_half - Prints half of a string, followed by a new line.
*
* @str: Pointer to the string.
*/
void puts_half(char *str)
{
int length = strlen(str);
int start_index = (length - 1) / 2;
int i;

for (i = start_index; i < length; i++)
{
putchar(str[i]);
}

putchar('\n');
}
