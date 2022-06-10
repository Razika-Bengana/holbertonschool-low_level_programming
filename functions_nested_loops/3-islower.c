#include <stdio.h>
#include "main.h"
/**
 * _islower - checks if a character is in lowercase
 * @c: An integer input
 * Return: 1 if character is lowercase, 0 otherwise
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
