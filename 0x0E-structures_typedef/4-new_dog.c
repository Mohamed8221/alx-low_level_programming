#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
* new_dog - creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*
* Return: pointer to the new dog_t
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newDog;
char *cpyName, *cpyOwner;

newDog = malloc(sizeof(dog_t));
if (newDog == NULL)
return (NULL);

cpyName = strdup(name);
if (cpyName == NULL)
{
free(newDog);
return (NULL);
}

cpyOwner = strdup(owner);
if (cpyOwner == NULL)
{
free(cpyName);
free(newDog);
return (NULL);
}

newDog->name = cpyName;
newDog->age = age;
newDog->owner = cpyOwner;

return (newDog);
}
