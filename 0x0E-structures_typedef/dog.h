#ifndef DOG_H
#define DOG_H
struct dog
{
	char name[50];
	char owner[50];
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
