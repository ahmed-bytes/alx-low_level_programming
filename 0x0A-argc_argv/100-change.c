#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the min num coins to change for an amount of money.
 * @argc: Arguement counter
 * @argv: Arguement Vector
 * Return: 0 means ran successfull else 1 means Error
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else
	{
		int cents[] = {25, 10, 5, 2, 1};
		int i, result = 0, tmp = atoi(argv[1]);

		for (i = 0; i < 5 && tmp >= 0; i++)
		{
			while (tmp >= cents[i])
			{
				result++;

				tmp -= cents[i];
			}
		}
		printf("%d\n", result);
	}
	return (0);
}
