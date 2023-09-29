#include "main.h"
/**
 * is_palindrome - Checks if a string is palindrome or not
 * @s: A pointer to a character, the string to check
 * Return: an int
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}

	return (string_palindrome(s, 0, length_rec(s)));
}


/**
 * length_rec - finds the length of the string recursively
 * @s: The string parameter
 * Return: The length int
 */

int length_rec(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	
	return (1 + length_rec(s + 1));
}


/**
 * string_palindrome - checks if the string is a palindrome
 * @s: string to check
 * @i: A parameter to iterate the string
 * @length: A parameter for the length of the string
 * Return: The result of the string being palindrome
 */

int string_palindrome(char *s, int i, int length)
{
	if (*(s + i) != *(s + length - 1))
	{
		return (0);
	}
	else if (i >= length)
	{
		return (1);
	}
	else
	{
		return (string_palindrome(s, i + 1, length - 1));
	}
}
