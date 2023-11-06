#include <stdlib.h>
#include "dog.h"

/**
* _strdup - Create a copy of the input string
* @src: The string to be duplicated
*
* Return: A pointer to the new string
*/

char *_strdup(char *src)
{
char *copy;
int i, length;

if (src == NULL)
{
return (NULL);
}

for (length = 0; src[length] != '\0'; length++)
;

copy = malloc(sizeof(char) * (length + 1));

if (copy == NULL)
{
return (NULL);
}

for (i = 0; src[i] != '\0'; i++)
{
copy[i] = src[i];
}

copy[i] = '\0';
return (copy);
}

/**
* create_dog - Create a new dog structure
* @name: Name of the dog
* @age: Age of the dog
* @owner: Owner of the dog
* Return: Pointer to the new dog structure
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *new_name, *new_owner;

if (name == NULL || owner == NULL)
{
return (NULL);
}

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{
return (NULL);
}

new_name = _strdup(name);
if (new_name == NULL)
{
free(new_dog);
return (NULL);
}
new_dog->name = new_name;

new_dog->age = age;

new_owner = _strdup(owner);
if (new_owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
new_dog->owner = new_owner;

return (new_dog);
}
