#include "main.h"
/**
 * puts2 -  function that prints every other character of a string
 * starting with the first character
 * @str: string parameter
 */

void puts2(char *str)
{
	int count = 0;
	int half = 0;
	char *copy = str;
	int rem;

	while (*copy != '\0')
	{
		copy++;
		count++;
	}

	half = count - 1;
	for (rem = 0; rem <= half; rem++)
	{
		if (rem % 2 == 0)
		{
			_putchar(str[rem]);
		}
	}

	_putchar('\n');
}
