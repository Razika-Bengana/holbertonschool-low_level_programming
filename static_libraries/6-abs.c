#include <stdio.h>
#include "main.h"

/**
 *_abs - compute the absolute value of an integer
 *@n: The number to be checked
 *Return: the absolute value of an integer
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
