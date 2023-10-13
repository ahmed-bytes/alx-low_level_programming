#include "3-calc.h"
/**
 * main - A simple calculator
 * @argc: number of arguments
 * @argv: array of arguements
 * Return: Always 0 means Success
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char operator;
	int (*cal)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	cal =  get_op_func(argv[2]);

	if (!cal)
	{
		printf("Error\n");
		exit(99);
	}

	operator = *argv[2];

	if ((operator == '/' || operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = cal(num1, num2);

	printf("%d\n", result);
	return (0);
}
