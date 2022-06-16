#include <stdio.h>
#include "main.h"
/**
 * _strcat - function that concatenate two strings
 * @src: a pointer to a char
 * @dest: a pointer to a char
 * Return: the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
