#include "main.h"
/**
 * _isdigit - Check if digit is a number
 * @c: charcter to check
 * Return: Returns 1 if c is number or else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	return (0);
}
