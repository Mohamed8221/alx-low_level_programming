#include <stdio.h>
#include "search_algos.h"

/**
 * print_subarray - Prints the current subarray during binary search
 * @array: Pointer to the full array
 * @low: Start index
 * @high: End index
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
 * binary_search_exp - Binary search within defined bounds
 * @array: Pointer to the array
 * @low: Lower bound index
 * @high: Upper bound index
 * @value: Target value
 *
 * Return: Index of value, or -1 if not found
 */
int binary_search_exp(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	while (low <= high)
	{
		print_subarray(array, low, high);
		mid = low + (high - low) / 2;

		if (array[mid] == value)
			return ((int)mid);
		else if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}

/**
 * exponential_search - Exponential search for a value in sorted array
 * @array: Pointer to the first element of array
 * @size: Number of elements
 * @value: Value to search
 *
 * Return: Index of value or -1 if not found or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, bound;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}

	bound = i < size ? i : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", i / 2, bound);
	return (binary_search_exp(array, i / 2, bound, value));
}
