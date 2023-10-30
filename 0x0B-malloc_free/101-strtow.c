#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* strtow - splits a string into words
* @str: the string to split
*
* Return: pointer to an array of strings (words)
*/
char **strtow(char *str)
{
char **words = NULL;
int i, j, k, len, count = 0;

if (str == NULL || str[0] == '\0')
return (NULL);

for (i = 0; str[i]; i++)
if ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i + 1] != ' '
&& str[i + 1] != '\t' && str[i + 1] != '\n')
count++;

words = malloc(sizeof(char *) * (count + 2));
if (words == NULL)
return (NULL);

i = j = 0;
while (i < count)
{
while (str[j] == ' ' || str[j] == '\t' || str[j] == '\n')
j++;
len = 0;
while (str[j + len] != ' ' && str[j + len] != '\t' && str[j + len] != '\n'
&& str[j + len])
len++;
words[i] = malloc(len + 1);
if (words[i] == NULL)
{
while (i >= 0)
free(words[--i]);
free(words);
return (NULL);
}
for (k = 0; k < len; k++)
words[i][k] = str[j + k];
words[i++][k] = '\0';
j += len;
}
words[i] = NULL;

return (words);
}
