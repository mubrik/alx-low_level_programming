#ifndef DOGGO_H
#define DOGGO_H
#include <stdlib.h>

/**
 * struct dog - Describes a dog
 * @name: char ptr name of dog
 * @owner: char ptr owner of dog
 * @age: float age of dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
typedef struct dog dog_t;

void init_dog(struct dog *dog_ptr, char *name, float age, char *owner);
void print_dog(struct dog *dog_ptr);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *dog_ptr);

#endif /* DOGGO_H */
