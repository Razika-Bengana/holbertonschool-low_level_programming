#include <stdio.h>
#include "main.h"
/**
 *print_alphabet - print alphabets in lowercase
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
