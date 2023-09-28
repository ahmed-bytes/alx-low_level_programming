#include "main.h"
/**
 * print_diagonal - draws a straight line in the terminal
 * @n: the number of times the line should be printed
 * Return: returns 0 if successful
 */

void print_diagonal(int n)
{
	int lines = 0;
	int space;

	if (n > 0)
	{
		while (lines < n)
		{
			space = 0;

			while (space < lines)
			{
				_putchar(' ');
				space++;
			}
			_putchar('\\');
			_putchar('\n');
			lines++;
		}
	}
	else
	{
		_putchar('\n');
	}

}
