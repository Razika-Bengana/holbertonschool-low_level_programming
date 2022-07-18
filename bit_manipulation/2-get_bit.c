#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: unsigned long int
 * @index: the index starting from 0 of the bit to get
 * Return: the value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(index) * 8))
		return (-1);

	if ((n >> index) & 1)
		return (1);
	return (0);
}
