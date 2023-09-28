#include "main.h"
/**
 * char *_strncat - a function that concatenates two strings
 * using at most n bytes from src
 * @src: the parameter to append from
 * @dest: the parameter to append to
 * @n: bytes parameter
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int first_count, second_count;

	first_count = 0;

	while (dest[first_count] != '\0')
	{
		first_count++;
	}

	second_count = 0;

	while (second_count < n && src[second_count] != '\0')
	{
		dest[first_count] = src[second_count];

		first_count++;
		second_count++;
	}
	dest[first_count] = '\0';
	return (dest);
}
