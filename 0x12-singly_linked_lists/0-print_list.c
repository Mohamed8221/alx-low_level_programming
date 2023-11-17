#include <stdio.h>
#include "lists.h"

/**
* print_list - prints all the elements of a list_t list
* @h: pointer to the list_t list to print
*
* Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
const list_t *current;
size_t s;

for (current = h, s = 0; current; current = current->next, s++)
{
printf(current->str ? "[%d] %s\n" : "[0] (nil)\n",
current->len, current->str);
}

return (s);
}
