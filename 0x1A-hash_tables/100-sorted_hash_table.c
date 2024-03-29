#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
* shash_table_create - creates a sorted hash table
* @size: size of the array
*
* Return: pointer to the newly created sorted hash table
* If something went wrong, returns NULL
*/
shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *new_table;
unsigned long int i;

new_table = malloc(sizeof(shash_table_t));
if (new_table == NULL)
return (NULL);

new_table->size = size;
new_table->array = malloc(sizeof(shash_node_t *) * size);
if (new_table->array == NULL)
{
free(new_table);
return (NULL);
}

for (i = 0; i < size; i++)
new_table->array[i] = NULL;

new_table->shead = NULL;
new_table->stail = NULL;

return (new_table);
}
