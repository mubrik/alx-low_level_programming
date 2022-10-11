#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  * _strlen_recursion - returns the length of a string.
	* @src_ptr: pointer of char
	* Return: int length
	*/
int _strlen_recursion(char *src_ptr)
{
	/* checking if the current value of pointer not null */
	if (*src_ptr != '\0')
	{
		/* move the pointer foward and call the function again adding 1! */
		src_ptr++;
		return (1 + _strlen_recursion(src_ptr));
	}

	return (0);
}


/**
  * _strdup - returns a pointer to a newly allocated space in memory,
	* which contains a copy of the string given as a parameter.
	* @str_ptr: string ptr
	* Return: ptr to the array or NULL
	*/
char *_strdup(char *str_ptr)
{
	char *arr;
	unsigned int index, size;

	/* save some cycle */
	if (str_ptr == NULL)
		return (NULL);
	/* get string len */
	size = _strlen_recursion(str_ptr);

	/* alloc space, +1 for null terminator  */
	arr = (char *) malloc((size * sizeof(char)) + 1);
	/* sure malloc is successful */
	if (arr == NULL)
		return (NULL);
	/* fill with character */
	for (index = 0; index <= size; index++)
	{
		/* null terminator if last memory allocated */
		if (index == size)
		{
			arr[index] = '\0';
			break;
		}
		arr[index] = str_ptr[index];
	}

	return (arr);
}

/**
 * new_dog - creates a new dog
 * @name: char ptr name of dog
 * @owner: char ptr owner of dog
 * @age: float age of dog
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *n_name, *n_owner;
	struct dog *n_dog;

	/* duplicate / store in mem */
	n_name = _strdup(name);
	n_owner = _strdup(owner);
	/* check null */
	if (n_name == NULL || n_owner == NULL)
		return (NULL);

	/* alloc for new dog */
	n_dog = malloc(sizeof(dog_t));
	/* verify */
	if (n_dog == NULL)
		return (NULL);
	/* assign */
	n_dog->age = age;
	n_dog->name = n_name;
	n_dog->owner = n_owner;
	/* return */
	return (n_dog);
}
