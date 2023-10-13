#include "function_pointers.h"
/**
 * print_name - A function that prints a name
 * @name: Array of characters
 * @f: A pointer function
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
