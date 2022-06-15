#include "main.h"
/**
 * print_rev - prints a string in reverse
 *@s: a pointer
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++);
	for (i = i; i--;)
	{
		_putchar(s[i]);
	}
	_putchar (10);
}
