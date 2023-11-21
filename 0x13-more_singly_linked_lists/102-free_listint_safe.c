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
listint_t *fast = *h, *slow = *h;

if (!h || !(*h))
return (0);

while (slow && fast && fast->next)
{
len++;
if (slow == fast && len > 1)
{
*h = NULL;
return (len);
}
slow = slow->next;
fast = fast->next->next;
}

while (*h)
{
fast = (*h)->next;
free(*h);
*h = fast;
len++;
}

*h = NULL;

return (len);
}
