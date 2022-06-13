#include "main.h"
/**
 * print_numbers - prints the numbers from 0 to 9
 * Return: the result of void
 */
void print_numbers(void)
{
	int number;

	number = 0;
	while (number < 10)
	{
		_putchar (number + '0');
		number++;
	}
	_putchar (10);
}
