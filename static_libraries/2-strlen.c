#include "main.h"
/**
 * _strlen - function that returns the lenght of a string
 *@s: a string
 * Return: the lenght
 */

int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return (a);

}
