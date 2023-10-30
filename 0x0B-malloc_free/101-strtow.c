#include "main.h"
#include <stdlib.h>

/**
* word_count - counts the number of words in a string
* @str: string to count words in
*
* Return: number of words in the string
*/
int word_count(char *str)
{
int i, count = 0;

for (i = 0; str[i]; i++)
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
count++;

return (count);
}

/**
* strtow - splits a string into words
* @str: string to split
*
* Return: pointer to an array of words, or NULL if it fails or str is NULL or ""
*/
char **strtow(char *str)
{
char **words;
int i, j, k, l, wc;

if (str == NULL || str[0] == '\0')
return (NULL);

wc = word_count(str);
if (wc == 0)
return (NULL);

words = malloc(sizeof(char *) * (wc + 1));
if (words == NULL)
return (NULL);

for (i = 0, k = 0; k < wc; k++)
{
while (str[i] == ' ')
i++;

for (j = i; str[j] != ' ' && str[j] != '\0'; j++)
;

words[k] = malloc(sizeof(char) * (j - i + 1));
if (words[k] == NULL)
{
while (--k >= 0)
free(words[k]);
free(words);
return (NULL);
}

for (l = 0; l < j - i; l++)
words[k][l] = str[i + l];
words[k][l] = '\0';

i = j;
}

words[k] = NULL;

return (words);
}
