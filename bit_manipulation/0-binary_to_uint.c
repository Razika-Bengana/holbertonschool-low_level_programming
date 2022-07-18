#include <string.h>
#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: a pointer to the string of 0 and 1 chars
 * Return: the converted number, or 0 if one or more chars is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	int a = 0;
	unsigned int i = 1;
	unsigned int n = 0;
	unsigned int len;

	len = strlen(b);

	for (a = len - 1; a >= 0; a--)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
		if (b[a] == '1')
		{
			n += i;
		}
		i *= 2;
	}
	return (n);
}
