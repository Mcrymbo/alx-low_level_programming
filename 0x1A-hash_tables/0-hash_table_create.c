#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table
 * Return: Pointer to the new table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = NULL;
	unsigned long int i = 0;

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return NULL;
	new->array = malloc(sizeof(hash_node_t) * size);
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}
	new->size = size;
	/* initializing new->array to NULL*/
	for (; i < size; i++)
	{
		new->array[i] = NULL;
	}
	return (new);
}
