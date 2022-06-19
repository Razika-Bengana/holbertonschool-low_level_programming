#include <stddef.h>
#include "main.h"
/**
 * _strspn - function that gets the lenght of a prefix substring
 * @s: contain number of bytes returned
 * @accept: bytes to include from @s
 * Return: the number of bytes that are coming from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int p, len, c = 0;

	for (p = 0; s[p] != '\0'; p++)
	{
		if (s[p] != ' ')
		{
			for (len = 0; accept[len] != '\0'; len++)
			{
				if (s[p] == accept[len])
					c++;
			}
		}
		else
			return (c);
	}

	return (c);
}
