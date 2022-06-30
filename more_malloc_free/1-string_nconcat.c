#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * string_nconcat - function that concatenates 2 strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes of s2
 * Return: the returned pointer or null if the function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int lens1, lens2, j, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (lens1 = 0; s1[lens1] != '\0'; lens1++)
		;
	for (lens2 = 0; s2[lens2] != '\0'; lens2++)
		;

	if (n > lens2)
		n = lens2;
	j = lens1 + n;
	ptr = malloc(sizeof(char) * (j + 1));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < j; i++)
		if (i < lens1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - lens1];

	ptr[j] = '\0';
	return (ptr);
}
