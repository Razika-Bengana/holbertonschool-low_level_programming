#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - return the sum of a and b
 * @a: an integer
 * @b: an integer
 * Return: the result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return the difference of a and b
 * @a: an integer
 * @b: an integer
 * Return: the result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return the product of a and b
 * @a: an integer
 * @b: an integer
 * Return: the result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return the result of the division of a by b
 * @a: an integer
 * @b: an integer
 * Return: the result
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - return the reminder of the division of a by b
 * @a: an integer
 * @b: an integer
 * Return: the result
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
