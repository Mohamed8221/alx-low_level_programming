#include "lists.h"
#include <stdio.h>

/**
* node_is_in_list - checks if a node is in the list
* @head: pointer to the start of the list
* @node: node to check
*
* Return: 1 if node is in the list, 0 otherwise
*/
int node_is_in_list(const listint_t *head, const listint_t *node)
{
while (head != NULL)
{
if (head == node)
{
return (1);
}
head = head->next;
}
return (0);
}

/**
* print_listint_safe - prints a listint_t linked list safely
* @head: pointer to the start of the list
*
* Return: number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
size_t len = 0;
const listint_t *temp = head;

while (temp != NULL)
{
printf("[%p] %d\n", (void *)temp, temp->n);
len++;
if (node_is_in_list(temp->next, head))
{
printf("-> [%p] %d\n", (void *)temp->next, temp->next->n);
break;
}
temp = temp->next;
}

return (len);
}
