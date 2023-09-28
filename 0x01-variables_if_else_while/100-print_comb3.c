#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- Entry point. The program tells if number is positive,negative or zero
 * Return: 0 which means it exited successfully
 */

int main(void)
{
	int n, comb;

	for (n = 0; n <= 9; n++)
	{
		for (comb = n + 1; comb <= 9; comb++)
		{
			putchar(n + '0');
			putchar(comb + '0');

			if (n < 8 || comb < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
