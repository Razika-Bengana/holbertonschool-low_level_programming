#include "main.h"
/**
 * _isupper - checks for uppercase letter
 * @c: define the variable to be tested
 * Return: 1 if it is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >='A' && c <='Z')
		return (1);
	else
		return (0);
}
