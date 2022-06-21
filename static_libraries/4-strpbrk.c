#include <stddef.h>
#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: contain number of bytes returned
 * @accept: bytes to include from @s
 * Return: number of bytes that are coming from @accept, or NULL for nothing
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{

		for (a = 0; accept[a]; a++)
		{
			if
				(*s == accept[a])
				return (s);
		}
		s++;
	}
	return (NULL);
}
