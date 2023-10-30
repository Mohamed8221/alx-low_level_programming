#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
* strtow - splits a string into words
* @str: string to split
*
* Return: pointer to an array of strings (words)
*/
char **strtow(char *str)
{
char **words;
int i, j, k, l, m, word_count = 0;

if (str == NULL || str[0] == '\0')
return (NULL);

for (i = 0; str[i]; i++)
if ((str[i] == ' ' || str[i + 1] == '\0') && str[i + 1] != ' ')
word_count++;

words = malloc(sizeof(char *) * (word_count + 1));
if (words == NULL)
return (NULL);

for (i = 0, l = 0; i < word_count; i++, l++)
{
while (str[l] == ' ')
l++;
for (j = l; str[j] != ' ' && str[j]; j++)
;
words[i] = malloc(sizeof(char) * (j - l + 1));
if (words[i] == NULL)
{
for (; i >= 0; i--)
free(words[i]);
free(words);
return (NULL);
}
for (k = 0, m = l; m < j; k++, m++)
words[i][k] = str[m];
words[i][k] = '\0';
}
words[word_count] = NULL;
return (words);
}
