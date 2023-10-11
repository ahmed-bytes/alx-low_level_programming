#ifndef DOG_H
#define DOG_H
/**
 * struct dog - A description of dog
 * @name: first field for doggy's cute name
 * @age: doggy's age
 * @owner: The doggy's lucky owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dog;
#include <stdio.h>
#include <stdlib.h>
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
