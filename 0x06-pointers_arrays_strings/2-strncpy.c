#include "main.h"
/**
 * char *_strncpy - a function that copies a string.
 * @src: the parameter to copy from
 * @dest: the parameter to copy to
 * @n: bytes parameter needed
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count;

	count = 0;

	while (dest[count] != '\0' && count < n)
	{
		dest[count] = src[count];
		count++;
	}

	while (count < n)
	{
		dest[count] = '\0';

		count++;
	}
	return (dest);
}
