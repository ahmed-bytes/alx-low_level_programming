#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of cute dog
 * @age: age of cute dog
 * @owner: name of lucky owner
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *cute_dog;
	int length1, length2;

	length1 = my_strlen(name);
	length2 = my_strlen(owner);

	cute_dog = malloc(sizeof(dog_t));
	if (cute_dog == NULL)
		return (NULL);

	cute_dog->name = malloc(sizeof(char) * (length1 + 1));
	if (cute_dog->name == NULL)
	{
		free(cute_dog);
		return (NULL);
	}
	cute_dog->owner = malloc(sizeof(char)* (length2 + 1));
	if (cute_dog->owner == NULL)
	{
		free(cute_dog);
		free(cute_dog->name);
		return (NULL);
	}
	my_strcpy(name, cute_dog->name);
	my_strcpy(owner, cute_dog->owner);
	cute_dog->age = age;

	return (cute_dog);
}


/**
 * my_strlen - The length of the string
 * @s: string get length
 * Return: The number
 */
int my_strlen(char *c)
{
	int i;

	while (c[i] != '\0')
	{
		i++;
	}

	return (i);
}


/**
 * my_strcpy - copy sting
 * @s_from: string parameter to copy from
 * @s_to: string parameter to copy to
 */
char *my_strcpy(char *s_from, char *s_to)
{
	int i, j, length = 0;

	for (i = 0; s_from[i] != '\0'; i++)
	{
		length++;
	}
	for (j = 0; j < length; j++)
	{
		s_to[j] = s_from[j];
	}
	s_to[j] = '\0';

	return (s_to);
}
