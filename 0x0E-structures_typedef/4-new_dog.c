#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
* new_dog - Creates a new dog and returns a pointer to it.
* @name: The name of the dog.
* @age: The age of the dog.
* @owner: The name of the dog's owner.
*
* Return: A pointer to the new dog, or NULL if the function fails.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
if (name == NULL || owner == NULL)
{
return (NULL);
}

dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));
if (newDog == NULL)
{
return (NULL);
}

newDog->name = strdup(name);
newDog->owner = strdup(owner);
newDog->age = age;

if (newDog->name == NULL || newDog->owner == NULL)
{
free(newDog->name);
free(newDog->owner);
free(newDog);
return (NULL);
}

return (newDog);
}
