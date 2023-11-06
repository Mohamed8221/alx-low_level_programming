#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Initializes a struct dog with the given values.
 * @d: Pointer to the struct dog to be initialized.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The name of the dog's owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d == NULL)
    {
        return;  // Check if d is a valid pointer.
    }

    d->name = name;
    d->age = age;
    d->owner = owner;
}
