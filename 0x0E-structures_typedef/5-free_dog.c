#include "dog.h"
/**
 * free_dog - free memory allocated to dog
 * @d: A pointer to the dog struct
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
