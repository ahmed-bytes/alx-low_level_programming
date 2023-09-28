#include <stdio.h>
/**
 * main - Entry Point of this program
 * Desc: Print all the numbers of base 16
 * Return: 0 means exited successfully
 */

int main(void)
{
	int number = '0';
	char letter = 'a';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}

	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
