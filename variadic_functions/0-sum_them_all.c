#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of arguments
 * Return: the result
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int a;

	va_list ptr;

	va_start(ptr, n);

	for (a = 0; a < n; a++)
		sum += va_arg(ptr, int);

	va_end(ptr);

	return (sum);
}
