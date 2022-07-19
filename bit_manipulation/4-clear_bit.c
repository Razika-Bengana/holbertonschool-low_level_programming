#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @index: index starting from 0 of the bit to set
 * @n: unsigned long int (pointer)
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > (sizeof(index) * 8))
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}
