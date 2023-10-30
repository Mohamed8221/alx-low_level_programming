#include "main.h"
#include <stdio.h>
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
char **words;
char *word;
int i, count;

if (str == NULL || str[0] == '\0')
return (NULL);

for (i = 0, count = 0; str[i]; i++)
if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
count++;

words = malloc((count + 2) * sizeof(char *));
if (words == NULL)
return (NULL);

word = strtok(str, " ");
for (i = 0; word != NULL; i++)
{
words[i] = malloc((strlen(word) + 1) * sizeof(char));
if (words[i] == NULL)
{
while (i >= 0)
free(words[--i]);
free(words);
return (NULL);
}

strcpy(words[i], word);
word = strtok(NULL, " ");
}
words[i] = NULL;

return (words);
}
