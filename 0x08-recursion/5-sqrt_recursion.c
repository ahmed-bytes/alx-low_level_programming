#include "main.h"
/**
 * _sqrt_recursion - checks if the int is a natural number
 * @n: The argument int to square
 * Return: returns the natural square rootof the number
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (find_natural_sqrt(1, n));
}


/**
 * find_natural_sqrt - Finds the square root of the number recursively
 * @a: An argument int that squares itself to get the output
 * @b: The main argument int to find its square root
 * Return: the square root value
 */
int find_natural_sqrt(int a, int b)
{
	if (a * a > b)
	{
		return (-1);
	}
	else if (a * a == b)
	{
		return (a);
	}
	else
	{
		return (find_natural_sqrt(a + 1, b));
	}
}
