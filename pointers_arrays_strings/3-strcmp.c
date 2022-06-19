#include <stdio.h>
#include "main.h"
/**
 * _strcmp - function that compare 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: an integer
 * Return: 0 (success)
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
