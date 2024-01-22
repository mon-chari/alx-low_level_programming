#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct dog - defines a new type
 * @name: first member
 * @owner: second member
 * @age: third member
 */
struct dog
{
	char name[50];
	char owner[50];
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
