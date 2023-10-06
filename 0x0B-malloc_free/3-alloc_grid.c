#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* alloc_grid - function that returns a pointer to a 2 dimensional array of integers
* @width: width of the grid
* @height: height of the grid
* Description: In function, used pointers and memory allocation
* Return: The pointer to the 2d array
*/

char **alloc_grid(int width, int height)
{
	int **result;
	int x_axis, y_axis;

	if (width <= 0 || height <= 0)
	{
		return(NULL);
	}
       result = malloc(height * sizeof(int *));
	if (result == NULL)
	{
		return (NULL);
	}

	for (x_axis = 0; x_axis < height; x_axis++)
	{
		result[x_axis] = malloc(sizeof(int) * width);
		if (result[x_axis] == NULL)
		{
			for (; x_axis >= 0; x_axis--)
			{
				free(result[x_axis]);
			}
			free(result);
			return (NULL);
		}
	}
	for (x_axis = 0; x_axis < height; x_axis++)
	{
		for (y_axis = 0; y_axis < width; y_axis++)
		{
			result[x_axis][y_axis] = 0;
		}
	}
	return (result);
}
