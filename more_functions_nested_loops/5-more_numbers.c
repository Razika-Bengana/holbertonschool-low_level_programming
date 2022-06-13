#include "main.h"
/**
 * more_numbers - prints the numbers from 0 to 14, 10 times
 * Return: the result of void
 */
void more_numbers(void)
{
	int row, number;

	for (row = 0; row < 10; row++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number >= 10)
			{
				_putchar((number / 10) + '0');
			}
			_putchar((number % 10) + '0');
		}
		_putchar(10);
	}
}
