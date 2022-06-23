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

	for (i = 0; i <= *str; i++)

	i = i + 1;
	s = malloc(sizeof(char) * i);

	for (a = 0; a < i; a++)
		s[a] = str[a];

	if (s == NULL)
		return (NULL);
	return (s);
}
