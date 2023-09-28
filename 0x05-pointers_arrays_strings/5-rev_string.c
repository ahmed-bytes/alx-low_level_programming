#include "main.h"

/**
 * rev_string -  prints a string followed by a new line in reverse
 * @s: parameter for the string
 */
void rev_string(char *s)
{

	char reverse_characters = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
	{
		counter++;
	}

	for (i = 0; i < counter ; i++)
	{
		counter--;
		reverse_characters = s[i];
		s[i] = s[counter];
		s[counter] = reverse_characters;
	}

}
