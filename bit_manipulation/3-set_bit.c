#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @index: index starting from 0 of the bit to set
 * @n: unsigned long int (pointer)
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(index) * 8))
		return (-1);

	*n |= 1 << index;

	return (1);
}
