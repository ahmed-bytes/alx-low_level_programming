#include "main.h"

/**
 * swap_int - a function that swaps two numbers
 * @a: First Integer to swap with second integer
 * @b: Second Integer to swap with First Integer
 */

void swap_int(int *a, int *b)
{
	int temporary_var;

	temporary_var = *a;
	*a = *b;
	*b = temporary_var;
}
