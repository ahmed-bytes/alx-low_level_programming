#include "main.h"
/**
 * _isupper - A function that checks for uppercase character
 * @c: charcter to check
 * Return: Returns 1 if c is uppercase or else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
