#include "main.h"

/**
* _strpbrk - Searches a string for any of a set of bytes
* @s: The string to search
* @accept: The bytes to accept
*
* Return: the byte in s matches one of the bytes in accept,or NULL if not found
*/
char *_strpbrk(char *s, char *accept)
{
int i, j;

for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
return (&s[i]);
}
}

return (NULL);
}
