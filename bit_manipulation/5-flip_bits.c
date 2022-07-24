#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: the number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int k = n ^ m, x = 0;

	while (k > 0)
	{
		if ((k & 1) != 0)
			x++;

		k = k >> 1;
	}

	return (x);
}
