#include "main.h"
/**
 * print_triangle -  a function that prints a triangle
 * @size: the size of the triangle
 * Return: returns 0 if successful
 */

void print_triangle(int size)
{
	int lines, space;

	if (size > 0)
	{
		lines = 0;

		while (lines < size)
		{
			space = size - 1;
			while (space < lines)
			{
				_putchar(' ');
				--space;
			}

			space = 0;

			while (space < lines + 1)
			{
				_putchar('#');
				space++;
			}
			_putchar('\n');
			lines++;
		}
	}
	else
	{
		_putchar('\n');
	}


}
