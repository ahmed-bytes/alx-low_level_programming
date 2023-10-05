#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strdup - Copies a string and returns a pointer to a new alloc space in mem
* @str: The string parameter to copy
* Return: A pointer to the new allocated memory space
*/
char *_strdup(char *str)
{
	char *string_cpy;
	int i, check, size;

	if (str == NULL)
	{
		return (NULL);
	}

	for (check = 0; str[check] != 0; check++)
	{
		size = check;
	}

	string_cpy = malloc(size + 1 * sizeof(char));
	if (string_cpy == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= size; i++)
	{
		string_cpy[i] = str[i];
	}
	return (string_cpy);
}
