#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure
 * @name:p
 * @age:p
 * @owner:p
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
