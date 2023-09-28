#include "main.h"

/**
 * _puts -  function that prints a string followed by a new line
 * @str: parameter for the string
 */
void _puts(char *str)
{

	for (; *str != '\0';)
	{
		_putchar(*str++);
	}

	_putchar('\n');
}
