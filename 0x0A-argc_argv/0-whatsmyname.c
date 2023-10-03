#include <stdio.h>
/**
* main - program that prints its name, followed by a new line.
* @argc: size of the cli arguement
* @argv: arguement string
* Return: 0 means success else fail
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
