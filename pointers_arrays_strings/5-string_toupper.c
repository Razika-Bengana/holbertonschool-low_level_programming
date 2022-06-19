#include <stdio.h>
#include "main.h"
/**
 * string_toupper - function that changes all lowercase letters to uppercase
 * @s: string that has to be changed
 * Return: string (success)
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
	}
	return (s);
}
