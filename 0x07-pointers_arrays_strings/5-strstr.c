#include "holberton.h"
#include <stdio.h>

/**
* _strstr - locates a substring
* @haystack: string to be searched
* @needle: substring to be located
*
* Return: pointer to the beginning of the located substring,
* or NULL if the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
char *start;
char *pattern;

while (*haystack)
{
start = haystack;
pattern = needle;

while (*haystack && *pattern && *haystack == *pattern)
{
haystack++;
pattern++;
}

if (!*pattern)
return (start);

haystack = start + 1;
}
return (NULL);
}
