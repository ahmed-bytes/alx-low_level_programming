#include "main.h"
#include "stdlib.h"
/**
 * _calloc - Allocate memory
 * @nmemb: an array element parameter is 0
 * @size: Size of the array
 * Return: A void pointer that allocates memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(p) + i) = 0;
	}
	return (ptr);
}
