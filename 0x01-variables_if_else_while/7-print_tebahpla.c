#include <stdio.h>
/**
 * main - Entry Point of this program
 * Desc: Print all the lowercase alphabets in reverse
 * Return: 0 means exited successfully
 */

int main(void)
{
	char lowerLetters = 'z';

	while (lowerLetters >= 'a')
	{
		putchar(lowerLetters);
		lowerLetters--;
	}
	putchar('\n');

	return (0);
}
