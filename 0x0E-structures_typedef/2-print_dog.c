#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_str_null - checks if str is null
 * @src_ptr: str to print
 * @name: name of variable
 * Return: always 0
 */
int print_str_null(char *src_ptr, char *name)
{
	if (src_ptr == NULL)
	{
		printf("%s: (nil)\n", name);
		return (0);
	}
	printf("%s: %s\n", name, src_ptr);
	return (0);
}

/**
 * print_dog -  function that prints a struct dog
 * @dog_ptr: ptr to dog struct
 */
void print_dog(struct dog *dog_ptr)
{
	if (dog_ptr == NULL)
		exit(EXIT_SUCCESS);

	print_str_null(dog_ptr->name, "Name");
	printf("Age: %f\n", dog_ptr->age);
	print_str_null(dog_ptr->owner, "Owner");
	exit(EXIT_SUCCESS);
}
