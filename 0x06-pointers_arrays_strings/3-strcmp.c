#include "main.h"
/**
 * _strcmp - a function that compares two strings.
 * @s1: parameter to compare
 * @s2: parameter to compare
 * Return: 0 means ran and exited sucessflly
 */
int _strcmp(char *s1, char *s2)
{
	int counter;

	counter = 0;
	while (s1[counter] != '\0' && s2[counter] != '\0')
	{
		if (s1[counter] != s2[counter])
		{
			return (s1[counter] - s2[counter]);
		}
		counter++;
	}
	return (0);
}
