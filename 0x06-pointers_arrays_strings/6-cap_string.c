#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
* cap_string - capitalizes all words of a string
* @s: the string to capitalize
*
* Return: pointer to the capitalized string
*/
char *cap_string(char *s)
{
int i = 0;

if (s[i] != '\0' && isalpha(s[i]))
s[i] = toupper(s[i]);

for (i = 1; s[i] != '\0'; i++)
{
switch (s[i - 1])
{
case ' ':
case '\t':
case '\n':
case ',':
case ';':
case '.':
case '!':
case '?':
case '"':
case '(':
case ')':
case '{':
case '}':
if (isalpha(s[i]))
s[i] = toupper(s[i]);
break;
}
}

return (s);
}
