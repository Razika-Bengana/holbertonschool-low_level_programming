#include <stddef.h>
#include "main.h"
/**
 * _strpbrk - function that locates a substring
 * @haystack: string
 * @needle: substring
 * Return: a pointer to the begginning of the substring, or NULL for nothing
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b = 0;

	while (needle[b] != '\0')
		b++;
	while (*haystack)
	{
		for (a = 0; needle[a]; a++)
		{
			if (haystack[a] != needle[a])
				break;
		}
		if (a != b)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
