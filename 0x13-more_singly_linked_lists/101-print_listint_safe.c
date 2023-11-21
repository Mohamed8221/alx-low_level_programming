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

while (head)
{
len++;
printf("[%p] %d\n", (void *)head, head->n);
if ((void *)head < (void *)head->next)
{
printf("-> [%p] %d\n", (void *)head->next, head->next->n);
break;
}
head = head->next;
}

return (len);
}
