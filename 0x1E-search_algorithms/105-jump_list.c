#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Jump search in singly linked list
 * @list: Pointer to head of list
 * @size: Total number of nodes
 * @value: Value to search for
 *
 * Return: Pointer to node where value is found or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, index;
	listint_t *prev, *current;

	if (list == NULL || size == 0)
		return (NULL);

	step = (size_t)sqrt((double)size);
	prev = list;
	current = list;

	while (current->next && current->n < value)
	{
		prev = current;
		for (index = 0; index < step && current->next; index++)
			current = current->next;

		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);

		if (current->n >= value)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	       prev->index, current->index);

	while (prev && prev->index <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
