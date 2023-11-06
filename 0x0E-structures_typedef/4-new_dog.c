#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
* new_dog     - Create a new dog variable
* @name:        Name of the dog
* @age:         Age of the dog
* @owner:       Owner of the dog
* Return:       Pointer to new dog variable
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newDog;
char *dogName, *dogOwner;

if (name == NULL || owner == NULL)
{
return (NULL);
}

newDog = malloc(sizeof(dog_t));
if (newDog == NULL)
{
return (NULL);
}

dogName = strdup(name);
if (dogName == NULL)
{
free(newDog);
return (NULL);
}
newDog->name = dogName;

newDog->age = age;

dogOwner = strdup(owner);
if (dogOwner == NULL)
{
free(newDog->name);
free(newDog);
return (NULL);
}
newDog->owner = dogOwner;

return (newDog);
}
