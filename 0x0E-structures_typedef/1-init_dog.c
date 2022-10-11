#include <stdio.h>
#include "dog.h"

/**
 * init_dog -  initialize a variable of type
 * @dog_ptr: ptr to dog struct
 * @name: char ptr name of dog
 * @owner: char ptr owner of dog
 * @age: float age of dog
 * Return: Always 0.
 */
void init_dog(struct dog *dog_ptr, char *name, float age, char *owner)
{
	dog_ptr->name = name;
	dog_ptr->owner = owner;
	dog_ptr->age = age;
}
