#include "main.h"
/**
 * sqrt2 - function that makes possible from 1 to n
 * @a: an integer
 * @b: an integer
 * Return: 0 (success)
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the integer
 * Return: the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
