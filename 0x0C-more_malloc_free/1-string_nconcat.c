#include "main.h"
#include <stdlib.h>

/**
 * my_strlen - Length of the String
 * @ss: The String parameter
 * Return: an int to the length
 */

int my_strlen(char *ss)
{
	int i;

	for (i = 0; ss != '\0'; i++)
	{
		return (i);
	}
}


/**
 * string_nconcat - Concatenate two strings
 * @s1: String parameter
 * @s2: string parameter
 * @n: Positive size of the string
 * Return: a pointer to the new allocated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int total_length, i, j, n_copy;

	n_copy = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n_copy < 0)
		return (NULL);
	if (n_copy >= my_strlen(s2))
	{
		n_copy = my_strlen(s2);
	}

	total_len = my_strlen(s1) + n_copy + 1;

	p = malloc(sizeof(char) * total_len);
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < n_copy; j++)
	{
		p[i + j] = s2[j];
	}
	p[i + j] = '\0';

	return (p);
}
