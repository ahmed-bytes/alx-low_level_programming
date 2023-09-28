#include "main.h"
/**
 * print_most_numbers - A function that prints the numbers, from 0 to 9
 * Return: returns 0 if successful
 */

void print_most_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		if (num != 2 && num != 4)
		{
			_putchar(num + '0');
		}
		num++;
	}
	_putchar('\n');

}
