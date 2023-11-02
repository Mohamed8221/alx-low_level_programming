#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* string_nconcat - concatenates two strings
* @s1: first string
* @s2: second string
* @n: number of bytes of s2 to concatenate
*
* Return: pointer to the newly allocated space in memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int len_s1 = 0, len_s2 = 0, i;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len_s1])
len_s1++;
while (s2[len_s2])
len_s2++;

if (n >= len_s2)
n = len_s2;

concat = malloc(sizeof(char) * (len_s1 + n + 1));
if (concat == NULL)
return (NULL);

for (i = 0; i < len_s1; i++)
concat[i] = s1[i];
for (i = 0; i < n; i++)
concat[len_s1 + i] = s2[i];
concat[len_s1 + n] = '\0';

return (concat);
}
