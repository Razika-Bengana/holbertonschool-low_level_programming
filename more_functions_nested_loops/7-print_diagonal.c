#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 *@n: number of times the character \ should be printed
 * Return: the result of void
 */
void print_diagonal(int n)
{
	int a, j;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (j = 0; j < a; j++)
			{
				_putchar (' ');
			}
			_putchar (92);
			_putchar (10);
		}
	}

	else
	{
		_putchar (10);
	}

}
