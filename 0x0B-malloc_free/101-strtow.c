#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* strtow - splits a string into words
* @str: the string to split
*
* Return: a pointer to an array of strings (words)
*/
char **strtow(char *str)
{
if (str == NULL || *str == '\0')
return (NULL);

char **words = malloc(sizeof(char *));
if (words == NULL)
return (NULL);

char *token = strtok(str, " ");
int i = 0;
while (token != NULL)
{
words[i] = token;
i++;
words = realloc(words, sizeof(char *) * (i + 1));
if (words == NULL)
return (NULL);
token = strtok(NULL, " ");
}
words[i] = NULL;

return (words);
}
