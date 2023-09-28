#include <stdio.h>
/**
 * main - Entry point
 * desc: FizzBuzz interview question
 * Return: 0 means executed successfully
 */

int main(void)
{
	int check = 100;
	int number = 1;

	for (; number <= check; number++)
	{
		if (number % 3 == 0 && number % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (number % 3 == 0)
		{
			printf("Fizz");
		}
		else if (number % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", number);
		}
		if (number != 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
