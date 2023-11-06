#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* print_dog - prints a struct dog
* @d: struct dog
*/
void print_dog(dog_t *d)
{
if (d != NULL)
{
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
}
