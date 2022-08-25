#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located,
 * or -1 if value is not present in array or if array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t a;

	if (array == NULL || value == '\0')
		return (-1);

	for (a = 0; a < size; a++)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);

		if (array[a] == value)
			return (a);
	}
	return (-1);
}
