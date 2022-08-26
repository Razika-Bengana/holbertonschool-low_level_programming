#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array that will be sorted
 * in ascending order
 * @value: the value to search for that won’t appear more than once in array
 * Return: the index where value is located, or -1 if value is not present
 * in array or if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t x = 0, mid = 0, left = 0, right = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (x = left; x <= right; x++)
		{
			if (x < right)
				printf("%d, ", array[x]);
			else
				printf("%d\n", array[x]);
		}

		mid = (left + right) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
