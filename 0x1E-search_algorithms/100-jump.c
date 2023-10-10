#include "search_algos.h"

/**
 * jump_search - Searches for a value using Jump search algorithm
 * @array: Array to search in.
 * @size: Size of the array.
 * @value: Value to search for.
 * Return: Index of value || otherwise if not found.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t left, right, i, j;

	if (array)
	{
		i = sqrt(size);
		right = 0;
		left = 0;

		while (right <= size - 1)
		{
			if (array[right] >= value)
			{
				printf("Value found between indexes [%lu] and [%lu]\n", left, right);
				for (j = left; j <= right; j++)
				{
					printf("Value checked array[%lu] = [%d]\n", j, array[j]);
					if (array[j] == value)
						return (j);
				}
			}
			else if (array[right] < value)
			{
				printf("Value checked array[%lu] = [%d]\n", right, array[right]);
				left = right;
				right += i;
			}
		}
	}
	return (-1);
}
