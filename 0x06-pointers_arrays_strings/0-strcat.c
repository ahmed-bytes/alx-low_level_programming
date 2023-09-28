#include "main.h"
/**
 * char *_strcat - a function that concatenates two strings
 * @src: the parameter to append from
 * @dest: the parameter to append to
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int first_count, second_count;

	first_count = 0;

	while (dest[first_count] != '\0')
	{
		first_count++;
	}

	second_count = 0;

	while (src[second_count] != '\0')
	{
		dest[first_count] = src[second_count];

		first_count++;
		second_count++;
	}
	dest[first_count] = '\0';
	return (dest);
}
