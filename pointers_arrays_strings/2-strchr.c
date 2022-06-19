#include <stddef.h>
#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: character
 * Return: success or NULL only if the character isn't find
 */
char *_strchr(char *s, char c)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
		for (b = 0; b <= a; b++, s++)
	{
		if (*s == c)
			return (s);
	}
	return (NULL);
}
