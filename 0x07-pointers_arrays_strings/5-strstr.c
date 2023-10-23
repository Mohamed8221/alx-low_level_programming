#include "main.h"

/**
* _strstr - locates a substring
* @haystack: string to be searched
* @needle: substring to be located
*
* Return: the beginning of the located substring, or NULL if not found
*/
char *_strstr(char *haystack, char *needle)
{
int i;

while (*haystack)
{
char *begin = haystack;
char *pattern = needle;

while (*haystack && *pattern && *haystack == *pattern)
{
haystack++;
pattern++;
}

if (!*pattern)
return (begin);

haystack = begin + 1;
}
return (NULL);
}
