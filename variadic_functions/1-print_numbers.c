#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return :void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list l;

	va_start(l, n);
	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(l, const unsigned int));
		if (separator != NULL && a < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(l);
}
