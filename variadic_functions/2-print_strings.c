#include <stdarg.h>
#include<stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - function that prints strings
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return:void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list l;
	char *s;

	va_start(l, n);
	for (a = 0; a < n; a++)
	{
		s = va_arg(l, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator != NULL && (a + 1) != n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(l);
}
