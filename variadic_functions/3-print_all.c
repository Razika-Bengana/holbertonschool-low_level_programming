#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints anything (char, integer, float, string)
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int a = 0;
	char *s;
	va_list list;

	va_start(list, format);

	while (format && format[a])
	{

		switch (format[a++])
		{

		case 'c':
			printf("%c", va_arg(list, int));
			break;
		case 'i':
			printf("%i", va_arg(list, int));
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			break;
		case 's':
			s = va_arg(list, char *);
			if (s == NULL)
				printf("nil");

			printf("%s", s);
			break;

		default:
			continue;
		}
		if (format[a])
			printf(", ");
	}
	putchar(10);
}
