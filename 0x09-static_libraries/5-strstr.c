#include "main.h"
#include <stdlib.h>

/**
 * _strstr - locate a substring
 * @haystack: string
 * @needle: string substring
 * Return: Pointer to beginning of substring, or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, check;

	i = 0;
	check = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j + check] != '\0' && haystack[i + check] != '\0'
		       && needle[j + check] == haystack[i + check])
		{
			if (haystack[i + check] != needle[j + check])
				break;
			check++;
		}
		if (needle[j + check] == '\0')
			return (&haystack[i]);
		j++;
		i++;
	}

	return (NULL);
}
