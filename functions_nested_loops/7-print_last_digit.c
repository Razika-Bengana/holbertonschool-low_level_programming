#include <stdio.h>
#include "main.h"
/**
 *int print_last_digit(int) - print the last digit of a number
 *@n: The number to be checked
 *Return: value of last digit
 */

int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
		n = -n;
	_putchar(n + '0');
	return (n);
}
