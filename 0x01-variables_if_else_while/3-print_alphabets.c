#include <stdio.h>
/**
 * main - Entry Point of this program
 * Desc: Print all the alphabets in lowercase and in uppercase
 * Return: 0 means exited successfully
 */

int main(void)
{
	char lowerLetters = 'a';
	char upperLetters = 'A';

	while (lowerLetters <= 'z')
	{
		putchar(lowerLetters);
		lowerLetters++;
	}
	while (upperLetters <= 'Z')
	{
		putchar(upperLetters);
		upperLetters++;
	}
	putchar('\n');

	return (0);
}
