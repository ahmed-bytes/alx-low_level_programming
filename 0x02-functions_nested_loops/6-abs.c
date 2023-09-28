#include "main.h"
/**
 * _abs - Entry Point of the Program
 * @num: Number to round of
 * Return: 0 means ran and exited successfully
 */
int _abs(int num)
{
	if (num > 0)
	{
		return (num);
	}
	else
	{
		return (num * -1);
	}
}
