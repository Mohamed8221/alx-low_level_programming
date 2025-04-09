#include <stdio.h>
#include "search_algos.h"

/**
 * print_subarray - Prints the current subarray
 * @array: Pointer to full array
 * @low: Starting index
 * @high: Ending index
 */
void print_subarray(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
	}
	printf("\n");
}

/**
 * advanced_search_recursive - Recursive binary search for first occurrence
 * @array: Pointer to array
 * @low: Left index
 * @high: Right index
 * @value: Target value
 *
 * Return: Index of first match, or -1 if not found
 */
int advanced_search_recursive(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (low > high)
		return (-1);

	print_subarray(array, low, high);

	mid = low + (high - low) / 2;

	if (array[mid] == value)
	{
		if (mid == low || array[mid - 1] != value)
			return ((int)mid);
		return (advanced_search_recursive(array, low, mid - 1, value));
	}
	else if (array[mid] > value)
		return (advanced_search_recursive(array, low, mid - 1, value));
	else
		return (advanced_search_recursive(array, mid + 1, high, value));
}

/**
 * advanced_binary - Entry point for advanced binary search
 * @array: Pointer to first element of sorted array
 * @size: Number of elements
 * @value: Target value
 *
 * Return: Index of first occurrence or -1 if not found / NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_search_recursive(array, 0, size - 1, value));
}
