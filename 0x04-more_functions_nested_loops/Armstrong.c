#include <stdio.h>
#include <math.h>

/*
 * main- Entry point of this program
 * Return: 1 means success
 * Task: Tell if a number is an Armstrong Number
 */

int main(void)
{
	int number, last_digit, powers = 0, check;

	/* Prompts a user for a positive integer and stores the input in number */
	do
	{
		printf("Enter a three digit number: ");
		scanf("%d", &number);
	}
	while(number < 0);
	/* stores the value of the input in number to check */
	check = number;
	
	/* As long as number is greater than 0 the loops continue */
	while(number > 0)
	{
		/* Extract and stores the last digit of the number */
		last_digit = number % 10;
		/* Gets the cube of the digit and stores it in the variable powers */
		powers = (last_digit * last_digit * last_digit) + powers;
		/* Removes the digit from the number */
		number = number / 10;
	}
	
	/* A condition to confirm if check and powers are the same */
	if (check == powers)
	{
		/* If the same prints it is an armstrong number */
		printf("It is an Armstrong Number!!\n");
	}
	else
	{	/* If not the same prints it is not an Armstrong number */
		printf("It is not an Armstrong Number!!\n");
	}

	return 0;


}

