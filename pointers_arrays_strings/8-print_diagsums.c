#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * of integers
 * @a: array
 * @size: size of the array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int e, b, result1 = 0, result2 = 0;

	for (e = 0; e <= (size * size); e = e + size + 1)
		result1 += a[e];

	for (b = size - 1; b <= (size * size) - size; b = b + size - 1)
		result2 += a[b];

	printf("%d, %d\n", result1, result2);
}
