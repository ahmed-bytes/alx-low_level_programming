#include "variadic_functions.h"
/**
 * sum_them_all - A function that sums all its parameters
 * @n: The last int parameter
 * Return: The result or 0 (if no parameter)
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	int result;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	result = 0;
	for (i = 0; i < n; i++)
		result += va_arg(ptr, int);
	va_end(ptr);
	return (result);
}
