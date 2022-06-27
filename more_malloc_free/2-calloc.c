#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _calloc - function that allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: size bytes of nmemb
 * Return: the pointer to the allocated memory or NULL if malloc fails,
 * or if nmemb or size is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int a;

	if (size == 0 || nmemb == 0)
		return (NULL);

        array = malloc(size * nmemb);

	if (array == NULL)
		return (NULL);

	for (a = 0; a < (size * nmemb); a++)
		array[a] = 0;

	return (array);
}
