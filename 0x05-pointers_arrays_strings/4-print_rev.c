#include "main.h"

/**
 * print_rev -  function that prints a string followed by a new line in reverse
 * @s: parameter for the string
 */

void print_rev(char *s)
{
	int decrease_count = 0;

	while (decrease_count >= 0)
	{
		if (s[decrease_count] == '\0')
		{
			break;
		}
		decrease_count++;
	}

	for (; decrease_count >= 0; decrease_count--)
	{
		_putchar(s[decrease_count]);
	}
	_putchar('\n');
}
