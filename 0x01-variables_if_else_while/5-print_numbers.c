#include <stdio.h>
/**
 * main - Entry Point of this program
 * Desc: Print all the numbers of base 10
 * Return: 0 means exited successfully
 */

int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%d", number);
		number++;
	}
	printf("\n");

	return (0);
}
