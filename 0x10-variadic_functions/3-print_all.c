#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything
 * @format: list of all arguments
 */

void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list ptr;
	char *s, *separator;

	va_start(ptr, format);

	separator = "";

	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(ptr, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(ptr, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(ptr, double));
				break;
			case 's':
				s = va_arg(ptr, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}

	printf("\n");
	va_end(ptr);
}
