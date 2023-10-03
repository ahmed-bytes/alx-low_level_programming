#include <stdio.h>
/**
 * main - A program that prints all arguments it receives.
 * @argc: Argument Counter
 * @argv: Arguement Vector or string
 * Return: 0 means ran successfully else 1 failed
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
