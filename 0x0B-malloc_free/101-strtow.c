#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* strtow - splits a string into words
* @str: the string to split
*
* Return: pointer to an array of words or NULL if it fails
*/
char **strtow(char *str)
{
char **words;
int i, j, k, l, word_count = 0;

if (str == NULL || *str == '\0')
return (NULL);

for (i = 0; str[i]; i++)
if ((str[i] != ' ' && str[i + 1] == ' ') ||
(str[i] != ' ' && str[i + 1] == '\0'))
word_count++;

words = malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);

for (i = 0, k = 0; i < word_count; i++)
{
while (str[k] == ' ')
k++;

for (j = k; str[j] != ' ' && str[j] != '\0'; j++)
;

words[i] = malloc((j - k + 1) * sizeof(char));
if (words[i] == NULL)
{
while (i >= 0)
free(words[--i]);
free(words);
return (NULL);
}

for (l = 0; k < j; l++, k++)
words[i][l] = str[k];
words[i][l] = '\0';
}
words[word_count] = NULL;

return (words);
}
