#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: An Int arguement to find the square root
 * Returns: The result int
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
 * find_natural_sqrt - finds the natural sqare root
 * @a: An int arguement to result to y
 * @b: An int arguement that should be squared
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
