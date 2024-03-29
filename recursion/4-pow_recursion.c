#include "main.h"
/**
 * _pow_recursion - returns the the value of x raised to the power of y
 * @x: integer one
 * @y: integer two
 * Return: the factorial of a given number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
