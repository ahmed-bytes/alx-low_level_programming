#include "main.h"
/**
 * puts_half -  a function that prints half of a string
 * starting with the first character
 * @str: string parameter
 */

void puts_half(char *str)
{
	int arr, calc, length;

	length = 0;

	for (arr = 0; str[arr] != '\0'; arr++)
	{
		length++;
	}

	calc = (length / 2);

	if ((length % 2) == 1)
	{
		calc = ((length + 1) / 2);
	}

	for (arr = calc; str[arr] != '\0'; arr++)
	{
		_putchar(str[arr]);
	}

	_putchar('\n');
}
