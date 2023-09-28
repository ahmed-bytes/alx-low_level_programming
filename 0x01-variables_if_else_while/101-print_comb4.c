#include <stdio.h>
/**
 * main- Entry point. The program tells if number is positive,negative or zero
 * Return: 0 which means it exited successfully
 */

int main(void)
{
	int n, comb, comb2;

	for (n = 0; n <= 7; n++)
	{
		for (comb = n + 1; comb <= 8; comb++)
		{
			for (comb2 = comb + 1; comb2 <= 9; comb2++)
			{
				putchar(n + '0');
				putchar(comb + '0');
				putchar(comb2 + '0');
				if (!(n == 7 && comb == 8 && comb2 == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
