#include "hash_tables.h"

/**
	* _strlen - returns the length of a string.
	* @src_ptr: str buffer
	* Return: int length
	*/
int _strlen(const char *src_ptr)
{
	if (*src_ptr != '\0')
	{
		/* move the pointer foward and call the function again adding 1! */
		src_ptr++;
		return (1 + _strlen(src_ptr));
	}

	return (0);
}

/**
	* _strdup - copies the string pointed to by src,
	* including the terminating null byte (\0), to a malloc buffer
	* @src: buffer ptr
	* Return: ptr to malloc'd string or null
	*/
char *_strdup(const char *src)
{
	unsigned int len = _strlen(src), index = 0;

	char *new = malloc(len + 1);

	if (new)
	{
		while (src[index])
			new[index] = src[index], index++;
		new[len] = '\0';
	}
	return (new);
}


/**
  * _strcmp - function that compares two strings.
	* @s1_ptr: src 1 pointer char
	* @s2_ptr: src 2 pointer char
	* Return: 0 if equal -1 if s1 less than s2
	* +1 if greater
	*/
int _strcmp(const char *s1_ptr, const char *s2_ptr)
{
	int s1_len, s2_len, iter, max_iter, compare_res;

	/* get len of both */
	s1_len = _strlen(s1_ptr);
	s2_len = _strlen(s2_ptr);
	compare_res = 0;

	/* iterate using longer len*/
	max_iter = s1_len >= s2_len ? s1_len : s2_len;
	/* quick check if s1 less for quick return? */
	iter = 0;

	while (iter < max_iter)
	{
		/* compare val of pointers*/
		compare_res = s1_ptr[iter] - s2_ptr[iter];
		/* if not equal break */
		if (compare_res != 0)
			break;
		iter++;
	}

	return (compare_res);

}

/**
 * add_node - adds a new node at the beginning of a hash_t list.
 * @head: pto to head ptr to list head
 * @index: index to add key/val
 * @key: Non empty string
 * @value: Value to stor
 * Return: ptr to new node.
 */
hash_node_t *add_node(hash_node_t **head, u_int64_t index,
	const char *key, const char *value)
{
	hash_node_t *node = NULL;
	char *str_dup = NULL, *key_dup = NULL;
	/* null chk */
	if (!head || !key)
		return (NULL);
	/* alloc space */
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);
	str_dup = _strdup(value);
	if (!str_dup)
	{
		free(node);
		return (NULL);
	}
	key_dup = _strdup(key);
	if (!key_dup)
	{
		free(str_dup), free(node);
		return (NULL);
	}
	/* struct attribs */
	node->key = key_dup, node->value = str_dup;
	/* add new nodes to start os singly list */
	node->next = head[index], head[index] = node;
	return (node);
}

/**
 * hash_table_set - adds a key/val pair to hash table
 * @ht: the hash table
 * @key: Non empty string
 * @value: Value to stor
 * Return: unsigned long int / index
 * Description: make sure key and size are safe and correct
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL;
	u_int64_t ind;
	/* checks */
	if (!ht || !key)
		return (0);
	/* index */
	ind = key_index((const unsigned char *) key, ht->size);
	/* check if new index */
	if (!ht->array[ind])
	{
		/* add node */
		node = add_node(ht->array, ind, key, value);
	}
	else
	{
		/* check if node with ey exists */
		node = ht->array[ind];
		while (node)
		{
			if (_strcmp(key, node->key) == 0)
				break;
			node = node->next;
		}
		/* add node if it doesnt, update if it does */
		if (node)
			free(node->value), node->value = _strdup(value);
		else
			node = add_node(ht->array, ind, key, value);
	}

	if (node)
		return (1);
	return (0);
}
