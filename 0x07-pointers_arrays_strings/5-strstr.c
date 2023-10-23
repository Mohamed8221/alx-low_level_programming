#include <stdio.h>
#include "main.h"

/**
* _strstr - locates a substring
* @haystack: string in which to check for substring
* @needle: substring to locate in haystack
*
* Return: The beginning of the located substring, or NULL if not found
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
