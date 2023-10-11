#ifndef DOG_H
#define DOG_H
/**
 * struct dog - A description of dog
 * @name: first field for doggy's cute name
 * @age: doggy's age
 * @owner: The doggy's lucky owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
#include <stdio.h>
#include <stdlib.h>
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
char *my_strcpy(char *s_from, char *s_to);
int my_strlen(char *s);
dog_t *new_dog(char *name, float age, char *owner);
#endif
