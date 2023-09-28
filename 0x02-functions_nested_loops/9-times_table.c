#include "main.h"
/**
 * times_table - Entry Point of the Function
 * Return: 0 means ran and exited successfully
 */
void times_table(void)
{
	int num1, num2;

	num1 = num2 = 0;
	while (num1 <= 9)
	{
		num2 = 0;
		while (num2 <= 9)
		{
			if ((num1 * num2) < 10)
			{
				if (num2 != 0)
				{
					_putchar(' ');
				}
				_putchar((num1 * num2) + '0');
				if (num2 != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(((num1 * num2) / 10) + '0');
				_putchar(((num1 * num2) % 10) + '0');
				if (num2 != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			num2++;
		}
		_putchar('\n');
		num1++;
	}
}
