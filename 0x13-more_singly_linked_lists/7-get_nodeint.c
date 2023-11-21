#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node of a listint_t linked list
* @head: pointer to the start of the list
* @index: index of the node, starting at 0
*
* Return: nth node of listint_t linked list or NULL if the node does not exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

for (i = 0; i < index && head != NULL; i++)
{
head = head->next;
}

return (head);
}
