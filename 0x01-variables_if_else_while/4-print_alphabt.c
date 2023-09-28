#include <stdio.h>
/**
 * main - Entry Point of this program
 * Desc: Print all the alphabets except q and e in lowercase
 * Return: 0 means exited successfully
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');

	return (0);
}
