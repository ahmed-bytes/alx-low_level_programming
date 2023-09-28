#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- Entry point of this program
 * Desc: tells if the last digit of a number is > 5,== 0 or < 6 and != 0
 * Return: 0 which means it exited successfully
 */

int main(void)
{
	int n, check;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	check = n % 10;

	if (check > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, check);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, check);
	}
	else
	{
		printf("Last digit of %i is %i and is 0\n", n, check);
	}

	return (0);
}
