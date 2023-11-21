#include "lists.h"
#include <stdlib.h>

/**
* free_listint_safe - frees a listint_t list safely
* @h: double pointer to the start of the list
*
* Return: size of the list that was free'd
*/
size_t free_listint_safe(listint_t **h)
{
size_t len = 0;
listint_t *temp;

while (*h)
{
len++;
temp = (*h)->next;
if ((void *)*h < (void *)temp)
{
free(*h);
*h = NULL;
break;
}
free(*h);
*h = temp;
}

return (len);
}
