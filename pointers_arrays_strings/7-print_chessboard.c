#include "main.h"
/**
 * print_chessboard - function that prints the chessboard
 * @a: array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int b, e;

	for (b = 0; b < 8; b++)
	{
		for (e = 0; e < 8; e++)
			_putchar(a[b][e]);
		_putchar(10);
	}
}
