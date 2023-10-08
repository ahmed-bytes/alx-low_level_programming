#include "main.h"
#include <stdlib.h>
/**
 * array_range - Allocate memory
 * @min: parameter for minimum value
 * @max: parameter for maximum value
 * Return: Pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i, size;
	int *ptr;

	if (min > max)
		return (NULL);

	size = (max - min + 1);

	ptr = malloc(size * sizeof(int));

	if (ptr == NUL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = min + i
	}
	return (ptr);
}
