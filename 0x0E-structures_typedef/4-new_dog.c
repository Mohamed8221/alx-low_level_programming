#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
* _strdup - duplicates a string
* @str: string to duplicate
*
* Return: pointer to the duplicated string
*/
char *_strdup(char *str)
{
char *dup;
int i, len = 0;

while (str[len])
len++;
dup = malloc(len + 1);
if (dup == NULL)
return (NULL);
for (i = 0; i < len; i++)
dup[i] = str[i];
dup[i] = '\0';
return (dup);
}

/**
* new_dog - creates a new dog
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
*
* Return: pointer to new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newDog;

newDog = malloc(sizeof(dog_t));
if (newDog == NULL)
return (NULL);

newDog->name = _strdup(name);
if (newDog->name == NULL)
{
free(newDog);
return (NULL);
}

newDog->age = age;

newDog->owner = _strdup(owner);
if (newDog->owner == NULL)
{
free(newDog->name);
free(newDog);
return (NULL);
}

return (newDog);
}
