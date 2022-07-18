#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number
 * @n: the unsigned int that has to be converted in binary representation
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar('0' + (n & 1));
}
