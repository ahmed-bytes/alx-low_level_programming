#include <stdio.h>
/**
 * main - Entry Point of this program
 * Desc: Print all the alphabets in lowercase
 * Return: 0 means exited successfully
 */

int main(void)
{
	int letter = 97;

	while (letter <= 122)
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
