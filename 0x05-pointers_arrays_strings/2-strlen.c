#include "main.h"

/**
 * _strlen -  function that returns the length of a string
 * @s: parameter for the string
 * Return: 0 means program ran and exited successfully
 */

int _strlen(char *s)
{
	int count = 0;

	for (; *s != '\0'; s++)
	{
		count++;

	}

	return (count);
}
