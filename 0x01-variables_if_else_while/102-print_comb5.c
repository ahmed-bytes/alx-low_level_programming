#include <stdio.h>
/**
 * main- Entry point. The program tells if number is positive,negative or zero
 * Return: 0 which means it exited successfully
 */

int main(void)
{
	int n, comb;

	for (n = 0; n <= 99; n++)
	{
		int n_tens = n / 10;
		int n_ones = n % 10;
		
		for (comb = n; comb <= 99; comb++)
		{
			int comb_tens = comb / 10;
			int comb_ones = comb % 10;
			if(n != comb)
			{
				putchar(n / 10 + '0');
				putchar(n % 10 + '0');
				putchar(' ');
				putchar(comb / 10 + '0');
				putchar(comb % 10 + '0');
				putchar(',');

				if (!(n == 9 && comb == 9))
				{
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
