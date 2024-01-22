#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

/**
 * struct dog - defines a new type
 * @name: first member
 * @owner: second member
 * @age: third member
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
