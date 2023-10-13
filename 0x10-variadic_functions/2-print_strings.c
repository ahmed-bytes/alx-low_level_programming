#include "variadic_functions.h"
/**
 * print_strings - Prints strings
 * @separator: String to be printed between string
 * @n: size of the strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	char *strings;
	unsigned int i;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		strings = va_arg(ptr, char *);

		if (strings == NULL)
			printf("(nil)");
		else
			printf("%s", strings);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
