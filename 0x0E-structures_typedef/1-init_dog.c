#include "dog.h"
/**
 * init_dog - Intializes a variable for a struct
 * @d: A pointer to the dog struct
 * @name: parameter for the name of the dog
 * @age: parameter for the age of the dog
 * @owner: parameter for the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
