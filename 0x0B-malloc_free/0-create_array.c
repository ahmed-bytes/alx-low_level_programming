#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* create_array - Creates an array of chars and initialize.
* @size: size of the array
* @c: The character
* Description: In function, used pointers and memory allocation
* Return: The array initialized with char c
*/

char *create_array(unsigned int size, char c)
{
	char *strings;
	unsigned int i;

	strings = malloc(size * sizeof(char));
	if (strings == NULL || strings == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		strings[i] = c;
	}

	return (strings);
}
