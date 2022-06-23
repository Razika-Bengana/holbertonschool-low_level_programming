#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str : the string
 * Return: the result
 */
char *_strdup(char *str)
{
	char *s;
	int a, i;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		;

		s = malloc(sizeof(char) * (a + 1));

	for (i = 0; i < a; i++)
		s[i] = str[i];

	s[a + 1] = '\0';
	return (s);
}
