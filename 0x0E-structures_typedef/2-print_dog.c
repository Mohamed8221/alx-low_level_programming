#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* print_dog - Prints the contents of a struct dog.
* @d: Pointer to the struct dog to be printed.
*/
void print_dog(struct dog *d)
{
if (d == NULL)
{
return;  /* If d is NULL, print nothing.*/
}

printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
printf("Age: %.1f\n", d->age);
printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
