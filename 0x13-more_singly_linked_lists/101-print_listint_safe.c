#include "lists.h"
#include <stdio.h>

/**
* print_listint_safe - prints a listint_t linked list safely
* @head: pointer to the start of the list
*
* Return: number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
size_t len = 0;
const listint_t *slow = head, *fast = head;

if (head == NULL)
{
return (0);
}

while (slow && fast && fast->next)
{
if (slow == fast && len > 0)
{
printf("-> [%p] %d\n", (void *)slow, slow->n);
return (len);
}
printf("[%p] %d\n", (void *)slow, slow->n);
len++;
slow = slow->next;
fast = fast->next->next;
}

while (slow != NULL)
{
printf("[%p] %d\n", (void *)slow, slow->n);
len++;
slow = slow->next;
}

return (len);
}
