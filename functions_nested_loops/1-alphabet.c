#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Prints alphabets 'a-z'
 */

	void print_alphabet(void)
{
	char a;

	for (a = 97; a <= 122 ; a++)
	{
		_putchar(a);
	}

	_putchar(10);

}
