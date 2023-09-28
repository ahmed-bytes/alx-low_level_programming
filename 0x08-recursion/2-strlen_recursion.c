#include "main.h"
/**
 * _strlen_recursion - A function that returns the length of a string
 * @s: An arguement an a pointer to a char
 * Return: returns an int type, in this case the length of a string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
