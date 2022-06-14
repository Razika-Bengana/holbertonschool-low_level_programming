#include "main.h"
/**
 * print_line - draws a line in the terminal
 *@n: numberof the lines
 * Return: the result of void
 */

void print_line(int n)
{

	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			_putchar ('_');
		}
		_putchar (10);
	}
	else
	{
			_putchar (10);
	}

}
