#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements of an array of integers
 * @a: parameter for the array
 * @n: prameter for the number of elements of the array
 */

void print_array(int *a, int n)
{
	int i;

	n = n - 1;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == n)
	{
		printf("%d", a[n]);
	}
	printf("\n");
}
