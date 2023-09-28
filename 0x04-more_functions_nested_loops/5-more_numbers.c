#include "main.h"
/**
 * more_numbers - A function that prints the numbers, from 0 to 9
 * Return: returns 0 if successful
 */

void more_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		int num2 = 0;

		while (num2 < 15)
		{
			if (num2 > 9)
			{
				_putchar(num2 / 10 + '0');
			}
			_putchar(num2 % 10 + '0');
			num2++;
		}
		_putchar('\n');
		num++;
	}
}
