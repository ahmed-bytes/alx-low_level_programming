#include "function_pointers.h"
/**
 * int_index - A function that searches for an integer
 * @array: Array of integers
 * @size: size of integers
 * @cmp: pointer function that compares value
 * Return: if an element is found, it returns
 * it index else -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}

	return (-1);
}
