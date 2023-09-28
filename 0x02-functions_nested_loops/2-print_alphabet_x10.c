#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * Return: 0 means ran and exited successfully
 */

void print_alphabet_x10(void)
{
	char alphabet = 'a';
	int line = 0;

	while (line < 10)
	{
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		alphabet = 'a';
		line++;
		_putchar('\n');
	}
}
