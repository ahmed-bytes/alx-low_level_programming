#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* str_concat - A function to concatenate two strings.
* @s1: String to concatenate
* @s2: String to concatenate
* Description: In function, used pointers and memory allocation
* Return: The concatenated string
*/
char *str_concat(char *s1, char *s2)
{
	char *joint_string;
	int i, j, length;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	length = i + j + 1;

	joint_string = malloc((length) * sizeof(char));
	if (joint_string == NULL)
		return (NULL);

	i = j = 0;
	while (s1[i] != '\0')
	{
		joint_string[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		joint_string[i] = s2[j];
		i++;
		j++;
	}

	joint_string[length] = '\0';
	return (joint_string);
}
