#include "hash_tables.h"

/**
 * key_index - gets the index of a key
 * @key: key to hash
 * @size: size of hashtable
 * Return: unsigned long int / index
 * Description: make sure key and size are safe and correct
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* shouldnt be here? */
	if (!key)
		return (0);
	/* get hash */
	return (hash_djb2(key) % size);
}
