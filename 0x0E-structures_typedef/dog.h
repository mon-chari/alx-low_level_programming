#ifndef DOG_H
#define DOG_H
/**
 * struct dog - defines a new type
 * @name: first member
 * @age: second member
 * @owner: third member
 */
struct dog
{
	char name[50];
	float age;
	char owner[50];
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
