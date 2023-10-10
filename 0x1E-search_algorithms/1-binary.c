#include "search_algos.h"

/**
 * binary_search - Searches in a sorted array using binary search.
 * @array: Array to search in
 * @size: Size of the array.
 * @value: The value to search for.
 * Return: Index of value || otherwise if not found.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t m, L, R, i;

	if (array)
	{
		L = 0;
		R = size - 1;
		while (L <= R)
		{
			printf("Searching in array: ");
			for (i = L; i <= R; i++)
			{
				if (i == L)
					printf("%d", array[i]);
				else
					printf(", %d", array[i]);

			}
			printf("\n");
			m = (L + R) / 2;

			if (array[m] == value)
				return (m);
			else if (array[m] > value)
				R = m - 1;
			else
				L = m + 1;
		}
	}
	return (-1);
}
