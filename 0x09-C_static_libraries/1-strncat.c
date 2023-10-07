#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: string
 * @src: string
 * @n: number of elements to concatenate in
 * Return: pointer to resulting `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, check;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (check = 0; src[check] != '\0' && n > 0; check++, n--, i++)
	{
		dest[i] = src[check];
	}
	return (dest);
}
