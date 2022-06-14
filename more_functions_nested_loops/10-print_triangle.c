#include "main.h"
/**
 * print_triangle - prints a triangle on the terminal
 *@size: prints the size of the triangle
 * Return: the result of void
 */
void print_triangle(int size)
{

	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (k = size - i; k >= 1; k--)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar(10);
	}
	if
		(size <= 0)
		{
			_putchar (10);
		}
}
