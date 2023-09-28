#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: character to compare
 * Return: 0 means ran and exited successfully
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
