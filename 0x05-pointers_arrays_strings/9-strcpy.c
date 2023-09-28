#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @src: parameter copied from
 * @dest: parameter to be copied to
 * Return: returns the copied string
 */

char *_strcpy(char *dest, char *src)
{
	int num = 0;
	int check = 0;

	while (*(src + num) != '\0')
	{
		num++;
	}

	for (; check <= num; check++)
	{
		dest[check] = src[check];
	}

	return (dest);
}
