#include "main.h"
/**
 * _isalpha - checks for lowercase character
 * @c: character to compare
 * Return: 0 means ran and exited successfully
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
