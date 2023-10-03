#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that multiplies two numbers.
 * @argc: Arguement counter
 * @argv: Arguement Vector
 * Return: 0 means ran successfull else 1 means Error
 */

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int i, result = 1;

		for (i = 1; i < argc; i++)
		{
			result *= atoi(argv[i]);
		}
		printf("%d\n", result);

		return (0);
	}
}
