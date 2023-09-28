#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: the number of times the character should be printed
 * Return: returns 0 if successful
 */

void print_line(int n)
{
	int num = 0;

	if (n > 0)
	{
		while (num < n)
		{
			_putchar('_');
			num++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}

}
