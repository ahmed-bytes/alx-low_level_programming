#include "main.h"
/**
 * print_numbers - A function that prints the numbers, from 0 to 9
 * Return: returns 0 if successful
 */

void print_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		_putchar('0' + num);
		num++;
	}
	_putchar('\n');

}
