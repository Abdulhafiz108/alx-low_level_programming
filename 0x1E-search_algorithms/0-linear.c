#include "search_algos.h"

/**
 * linear_search - Searches for value using linear search algorithm
 * @array: Array to search in.
 * @size: Size of the array.
 * @value: Value to search for.
 * Return: Index of value || otherwise if not found.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
