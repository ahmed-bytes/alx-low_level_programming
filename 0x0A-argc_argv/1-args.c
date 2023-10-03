#include <stdio.h>
/**
* main - program that prints the number of arguments passed into it
* @argc: size of cli arguements
* @argv: strings of cli arguments
* Return: 0 means ran successfully else fail
*/

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
