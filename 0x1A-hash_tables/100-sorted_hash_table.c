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

/**
* shash_table_set - adds an element to the sorted hash table
* @ht: the sorted hash table you want to add or update the key/value to
* @key: the key
* @value: the value associated with the key
*
* Return: 1 if it succeeded, 0 otherwise
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
}

/**
* shash_table_get - retrieves a value associated with a key
* @ht: the sorted hash table you want to look into
* @key: the key you are looking for
*
* Return: the value associated with the element, or NULL
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
char *hash_table_get(const hash_table_t *ht, const char *key);
}

/**
* shash_table_print - prints a sorted hash table
* @ht: the sorted hash table
*/
void shash_table_print(const shash_table_t *ht)
{
void hash_table_print(const hash_table_t *ht);
}

/**
* shash_table_print_rev - prints a sorted hash table in reverse order
* @ht: the sorted hash table
*/
void shash_table_print_rev(const shash_table_t *ht)
{

}

/**
* shash_table_delete - deletes a sorted hash table
* @ht: the sorted hash table
*/
void shash_table_delete(shash_table_t *ht)
{
void hash_table_delete(hash_table_t *ht);
}
