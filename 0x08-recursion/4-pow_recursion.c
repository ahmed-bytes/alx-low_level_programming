#include "main.h"
/**
 * _pow_recursion - A function that gives the result of an int power
 * @x: An int arguement, represent the main number
 * @y: An int arguement, represent the power
 * Return: returns an int, the result of x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
