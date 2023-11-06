#include <stdlib.h>
#include "dog.h"

/**
* _getLength - a function that gets a length of string
*
* @input: the string to get the length
*
* Return: length of @input
*/

int _getLength(const char *input)
{
int len = 0;

while (*input++)
len++;
return (len);
}

/**
* _copyString - a function that returns @target with a copy of a string
*
* @source: string to copy
* @target: copy string to here
*
* Return: @target
*/

char *_copyString(char *target, char *source)
{
int index;

for (index = 0; source[index]; index++)
target[index] = source[index];
target[index] = '\0';

return (target);
}

/**
* createDog - a function that creates a new dog
*
* @dogName: name of dog
* @dogAge: age of dog
* @dogOwner: dog owner
*
* Return: struct pointer dog
*         NULL if function fails
*/

dog_t *new_dog(char *dogName, float dogAge, char *dogOwner)
{
dog_t *newDog;

/* if dogName and dogOwner are empty and dogAge is less than zero return null*/
if (!dogName || dogAge < 0 || !dogOwner)
return (NULL);

newDog = (dog_t *) malloc(sizeof(dog_t));
if (newDog == NULL)
return (NULL);

newDog->name = malloc(sizeof(char) * (_getLength(dogName) + 1));
if ((*newDog).name == NULL)
{
free(newDog);
return (NULL);
}

newDog->owner = malloc(sizeof(char) * (_getLength(dogOwner) + 1));
if ((*newDog).owner == NULL)
{
free(newDog->name);
free(newDog);
return (NULL);
}

newDog->name = _copyString(newDog->name, dogName);
newDog->age = dogAge;
newDog->owner = _copyString(newDog->owner, dogOwner);

return (newDog);
}
