#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry Point of the Program
 * Desc: prints all natural numbers from n to 98
 * @n: parameter to be passed
 * Return: 0 means ran and exited successfully
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
		printf("\n");
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
		printf("\n");
	}
	else
	{
		printf("%d\n", n);
	}
}
