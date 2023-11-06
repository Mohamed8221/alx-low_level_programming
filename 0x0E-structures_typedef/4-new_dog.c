#include <stdlib.h>
#include "dog.h"

/**
* _duplicate  -   Make a copy of passed in argument
* @original:      Data to make copy of
* Return:    Pointer
*/

char *_duplicate(char *original)
{
char *copy;
int index, length;

if (original == NULL)
{
return (NULL);
}

for (length = 0; original[length] != '\0'; length++)
;

copy = malloc(sizeof(char) * (length + 1));

if (copy == NULL)
{
return (NULL);
}

for (index = 0; original[index] != '\0'; index++)
{
copy[index] = original[index];
}

copy[index] = '\0';
return (copy);
}

/**
* create_dog     - Create a new dog variable
* @dog_name:        Name of the dog
* @dog_age:         Age of the dog
* @dog_owner:       Owner of the dog
* Return:       Pointer to new dog variable
*/

dog_t *create_dog(char *dog_name, float dog_age, char *dog_owner)
{
dog_t *fido;
char *copy_name, *copy_owner;

if (dog_name == NULL || dog_owner == NULL)
{
return (NULL);
}

fido = malloc(sizeof(dog_t));
if (fido == NULL)
{
return (NULL);
}

copy_name = _duplicate(dog_name);
if (copy_name == NULL)
{
free(fido);
return (NULL);
}
(*fido).name = copy_name;

(*fido).age = dog_age;

copy_owner = _duplicate(dog_owner);
if (copy_owner == NULL)
{
free((*fido).name);
free(fido);
return (NULL);
}
(*fido).owner = copy_owner;

return (fido);
}
