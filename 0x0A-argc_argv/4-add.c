#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - A program that adds positive numbers.
 * @argc: Arguement counter
 * @argv: Arguement Vector
 * Return: 0 means ran successfull else 1 means Error
 */
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		int i, j, size, result = 0;

		for (i = 1; i < argc; i++)
		{
			size = strlen(argv[i]);

			for (j = 0; j < size; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			result += atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	return (0);
}
