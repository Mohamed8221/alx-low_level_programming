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
dog_t *new_dog(char *name, float age, char *owner) {
/* Check for NULL inputs */
if (name == NULL || owner == NULL) {
return (NULL);
}

/* Allocate memory for the dog_t structure and strings */
dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

if (newDog == NULL) {
return (NULL);  /* Memory allocation for the structure failed. */
}

newDog->name = strdup(name);
newDog->owner = strdup(owner);

if (newDog->name == NULL || newDog->owner == NULL) {
/* Memory allocation for strings failed, clean up and return NULL */
free(newDog->name);
free(newDog->owner);
free(newDog);
return (NULL);
}

newDog->age = age;

return (newDog);
}
