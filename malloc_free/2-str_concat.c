#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: the result
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int a;
	int b = 0;
	int c = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] || s2[a]; a++)
		b++;
	s = malloc(sizeof(char) * b);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (a = 0; s1[a]; a++)
		s[c++] = s1[a];
	for (a = 0; s2[a]; a++)
		s[c++] = s2[a];
	return (s);
}
