#include <stdio.h>
/**
 * main - Entry Point of this program
 * Desc: Print all the numbers of base 10
 * Return: 0 means exited successfully
 */

int main(void)
{
	int number = '0';

	while (number <= '9')
	{
		putchar(number);
		if (number != '9')
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}
	putchar('\n');

	return (0);
}
