#include "lists.h"
#include <stdio.h>

/**
 * first - prints a string before main is executed
 */

void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house back!\n");
}
