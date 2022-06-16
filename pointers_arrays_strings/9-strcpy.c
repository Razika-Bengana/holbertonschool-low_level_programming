#include "main.h"
/**
 * _strcpy - function that copies the string pointed to by src
 * @src: a pointer to a char
 * @dest: a pointer to a char
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char  *n = dest;

	while (*src)
		*dest++ = *src++;
	*dest = '\0';

	return (n);
}
