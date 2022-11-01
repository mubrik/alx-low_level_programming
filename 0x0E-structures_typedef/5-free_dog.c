#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free mem used by dog
 * @dog_ptr: ptr to dog struct
 */
void free_dog(dog_t *dog_ptr)
{
	if (dog_ptr == NULL)
		exit(EXIT_SUCCESS);
	/* free individual parts */
	free(dog_ptr->name);
	free(dog_ptr->owner);
	free(dog_ptr);
}
