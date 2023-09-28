#include "main.h"
/**
 * print_square - a function that prints a square
 * @size: the size of the square
 * Return: returns 0 if successful
 */

void print_square(int size)
{
	int rows, columns;

	if (size > 0)
	{
		columns = 0;

		while (columns < size)
		{
			rows = 0;

			while (rows < size)
			{
				_putchar('#');
				rows++;
			}
			_putchar('\n');
			columns++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
