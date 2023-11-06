#include <stdlib.h>
#include "dog.h"

/**
* _duplicate  -   Create a duplicate of the input argument
* @input:      Data to duplicate
* Return:      Pointer
*/

char *_duplicate(char *input)
{
char *dup;
int i, length;

if (input == NULL)
{
return (NULL);
}

for (length = 0; input[length] != '\0'; length++)
;

dup = malloc(sizeof(char) * (length + 1));

if (dup == NULL)
{
return (NULL);
}

for (i = 0; input[i] != '\0'; i++)
{
dup[i] = input[i];
}

dup[i] = '\0';
return (dup);
}

/**
* create_dog     - Create a new dog object
* @dog_name:        Name of the dog
* @dog_age:         Age of the dog
* @dog_owner:       Owner of the dog
* Return:           Pointer to new dog object
*/

dog_t *create_dog(char *dog_name, float dog_age, char *dog_owner)
{
dog_t *fido;
char *dup_name, *dup_owner;

if (dog_name == NULL || dog_owner == NULL)
{
return (NULL);
}

fido = malloc(sizeof(dog_t));
if (fido == NULL)
{
return (NULL);
}

dup_name = _duplicate(dog_name);
if (dup_name == NULL)
{
free(fido);
return (NULL);
}
(*fido).name = dup_name;

(*fido).age = dog_age;

dup_owner = _duplicate(dog_owner);
if (dup_owner == NULL)
{
free((*fido).name);
free(fido);
return (NULL);
}
(*fido).owner = dup_owner;

return (fido);
}
