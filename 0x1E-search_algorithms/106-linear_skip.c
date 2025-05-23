#include <stdio.h>
#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list
 * @list: Pointer to the head of the skip list
 * @value: Value to search for
 *
 * Return: Pointer to node where value is found, or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *prev, *curr;

	if (list == NULL)
		return (NULL);

	prev = list;
	curr = list->express;

	while (curr)
	{
		printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
		if (curr->n >= value)
			break;
		prev = curr;
		curr = curr->express;
	}

	if (!curr)
	{
		curr = prev;
		while (curr->next)
			curr = curr->next;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	       prev->index, curr->index);

	while (prev && prev->index <= curr->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
