#include "hash_tables.h"

/**
 * shash_table_create - sorted hashtable creator
 * @size: size of table
 * Return: pointer to hash struct
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *tb = NULL;
	shash_node_t **node = NULL;

	if (!size)
		return (NULL);
	/* malloc hash table struct*/
	tb = malloc(sizeof(shash_table_t));
	if (!tb)
		return (NULL);
	/* hash table array, node */
	node = calloc(size, sizeof(shash_node_t *));
	if (!node)
	{
		free(tb);
		return (NULL);
	}
	/* attribs */
	tb->size = size, tb->array = node, tb->shead = NULL, tb->stail = NULL;
	return (tb);
}

/**
 * add_node_sht - adds a new node to sorted ht.
 * @head: pto to head ptr to list head
 * @index: index to add key/val
 * @key: Non empty string
 * @value: Value to stor
 * Return: ptr to new node.
 */
shash_node_t *add_node_sht(shash_node_t **head, u_int64_t index,
	const char *key, const char *value)
{
	shash_node_t *node = NULL;
	char *str_dup = NULL, *key_dup = NULL;
	/* null chk */
	if (!head || !key)
		return (NULL);
	/* alloc space */
	node = malloc(sizeof(shash_node_t));
	if (!node)
		return (NULL);
	str_dup = strdup(value);
	if (!str_dup)
	{
		free(node);
		return (NULL);
	}
	key_dup = strdup(key);
	if (!key_dup)
	{
		free(str_dup), free(node);
		return (NULL);
	}
	/* struct attribs, new node so sorted next always NULL */
	node->key = key_dup, node->value = str_dup, node->snext = NULL;
	/* add new nodes to start os singly list */
	node->next = head[index], head[index] = node;
	return (node);
}

/**
 * update_add_node_sht - update/add note to sorted ht.
 * @head: pto to head ptr to list head
 * @index: index to add key/val
 * @key: Non empty string
 * @value: Value to stor
 * Return: int 0 == update, 1 == new node, negative error
 */
int update_node_sht(shash_node_t **head, u_int64_t index,
	const char *key, const char *value)
{
	shash_node_t *node = NULL;

	if (!head || !key)
		return (-1);
	node = head[index];
	while (node)
	{
		if (strcmp(key, node->key) == 0)
			break;
		node = node->next;
	}
	/* update if it does */
	if (node)
	{
		free(node->value), node->value = strdup(value);
		return (0);
	}
	return (1);
}

/**
 * sort_insert - insert a node to ht by sort.
 * @ht: the hash table
 * @node: pto to head ptr to list head
 * Return: ptr to node.
 */
shash_node_t *sort_insert(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *head;

	if (!ht || !node)
		return (NULL);
	/* check if head, first item */
	if (!ht->shead)
	{
		node->sprev = NULL, ht->shead = ht->stail = node;
		return (node);
	}

	head = ht->shead;
	while (head)
	{
		if (strcmp(head->key, node->key) >= 0)
		{
			if (head->sprev)
				head->sprev->snext = node;
			else
				/* new head */
				ht->shead = node, node->sprev = NULL;
			node->sprev = head->sprev, node->snext = head, head->sprev = node;
			return (node);
		}
		if (!head->snext)
			break;
		head = head->snext;
	}
	/* nodekey is larger than keys in list, use stail if avail or make stail */
	node->sprev = ht->stail, ht->stail->snext = node, ht->stail = node;
	return (node);
}

/**
 * shash_table_set - adds a key/val pair to sorted hash table
 * @ht: the hash table
 * @key: Non empty string
 * @value: Value to stor
 * Return: unsigned long int / index
 * Description: make sure key and size are safe and correct
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node = NULL;
	u_int64_t ind;
	int upd;
	/* checks */
	if (!ht || !key)
		return (0);
	/* index */
	ind = key_index((const unsigned char *) key, ht->size);
	/* check if new index, then create node */
	if (!ht->array[ind])
		node = add_node_sht(ht->array, ind, key, value);
	else
	{
		upd = update_node_sht(ht->array, ind, key, value);
		if (upd != 0)
			node = add_node_sht(ht->array, ind, key, value);
		else
			return (1);
	}
	/* quick return */
	if (!node)
		return (0);
	/* sort insert */
	node = sort_insert(ht, node);
	if (node)
		return (1);
	return (0);
}

/**
 * shash_table_get - gets the value of a key from sorted ht
 * @ht: the hash table
 * @key: Non empty string
 * Return: the value at key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	u_int64_t index;
	shash_node_t *node = NULL;

	if (!ht || !ht->array || !key)
		return (NULL);
	/* get index */
	index = key_index((const unsigned char *) key, ht->size);
	/* get node */
	if (index >= ht->size)
		return (NULL);
	node = ht->array[index];
	/* get exact key */
	while (node)
	{
		if (strcmp(key, node->key) == 0)
			break;
		node = node->next;
	}
	if (node)
		return (node->value);
	return (NULL);
}


/**
 * shash_table_print - prints sorted hash table
 * @ht: the hash table
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node = NULL;

	if (!ht || !ht->shead)
		return;
	/* opeening bracket */
	printf("{");
	/* iterate over doubly linke list */
	node = ht->shead;
	while (node)
	{
		printf("'%s': '%s'", node->key, node->value);
		if (node->snext)
			printf(", ");
		node = node->snext;
	}
	/* close bracket */
	printf("}\n");
}

/**
 * shash_table_print_rev - prints sorted hash table in rev
 * @ht: the hash table
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node = NULL;

	if (!ht || !ht->stail)
		return;
	/* opeening bracket */
	printf("{");
	/* iterate over doubly linke list */
	node = ht->stail;
	while (node)
	{
		printf("'%s': '%s'", node->key, node->value);
		if (node->sprev)
			printf(", ");
		node = node->sprev;
	}
	/* close bracket */
	printf("}\n");
}

/**
 * shash_table_delete - deletes sorted hash table
 * @ht: the hash table
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node = NULL, *next = NULL;

	if (!ht || !ht->shead)
		return;
	/* iterate over doubly linke list */
	node = ht->shead;
	while (node)
	{
		next = node->snext, free(node->value), free(node->key), free(node);
		node = next;
	}
	/* free array and ht*/
	free(ht->array), free(ht);
}
