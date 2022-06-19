#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: input
 * Return: void
 */
void puts_half(char *str)
{
	int j, n, len;

	len = 0;

	for (j = 0; str[j] != '\0'; j++)
		len++;

	n = (len / 2);

	if ((len % 2) == 1)
		n = ((len + 1) / 2);

	for (j = n; str[j] != '\0'; j++)
		_putchar(str[j]);

	_putchar('\n');
}
