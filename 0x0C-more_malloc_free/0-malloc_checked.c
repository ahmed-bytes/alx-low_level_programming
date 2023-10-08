#include "main.h"
/**
 * malloc_checked - Allocate memory
 * @b: parameter to allocate memory
 * Return: A void pointer to the allocated space
 */

void *malloc_checked(unsigned int b)
{
	void *pointer = malloc(sizeof(b));

	if (pointer == NULL)
		exit(98);

	return (pointer);
}
