#include <stddef.h>
#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: a pointer to the string of 0 and 1 chars
 * Return: the converted number, or 0 if one or more chars is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	int a = 0;
	unsigned int n = 0;

	if (b == NULL)
		return (0);

	while (b[a] == '0' || b[a] == '1')
	{
		n <<= 1;
		n += b[a] - '0';
		a++;
	}
	return (n);
}
