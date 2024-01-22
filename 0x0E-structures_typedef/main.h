#ifndef MAIN_H
#define MAIN_H

struct dog
{
	char name[30];
	char owner[30];
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
