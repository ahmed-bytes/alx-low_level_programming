#include "main.h"
/**
 * print_last_digit - Entry Point of the Program
 * @num: Number to print the last digit
 * Return: 0 means ran and exited successfully
 */
int print_last_digit(int num)
{
	int last_digit = num % 10;

	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar('0' + last_digit);

	return (last_digit);
}
