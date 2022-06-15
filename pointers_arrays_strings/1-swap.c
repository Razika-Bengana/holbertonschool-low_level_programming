#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 *@a: an integer
 *@b: an integer
 * Return: the result of void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
