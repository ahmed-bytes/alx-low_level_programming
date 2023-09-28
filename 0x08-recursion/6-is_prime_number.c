#include "main.h"
/**
 * is_prime_number - makes sure the number is not negative
 * @n: The integer arguement
 * Return: Resulting int
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (find_natural_prime(n, n - 1));
	}
}

/**
 * find_natural_prime - finds the prime number
 * @a: The number to check if prime
 * @b: The number to find recursively
 * Return: The prime int
 */

int find_natural_prime(int a, int b)
{
	if (b == 1)
	{
		return (1);
	}
	else if (a % b == 0 && b > 0)
	{
		return (0);
	}
	else
	{
		return (find_natural_prime(a, b - 1));
	}
}

