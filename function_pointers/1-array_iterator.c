#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator -function that executes a function given as a parameter
 * on each element of an array
 * @array: the array
 * @size: size of the array
 * @action: pointer to the function that has to be used
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int b;

	if (array == NULL || action == NULL)
		return;
	for (b = 0; b < size; b++)
		action(array[b]);
}
