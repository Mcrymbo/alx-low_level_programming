#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table
 * Return: Pointer to the new table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL, **new_array = NULL;
	unsigned long int i = 0;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_array = malloc(sizeof(hash_node_t *) * size);
	if (new_array == NULL)
	{
		free(new);
		return (NULL);
	}
	/* initializing new->array to NULL*/
	for (; i < size; i++)
	{
		new_array[i] = NULL;
	}
	new->array = new_array;
	new->size = size;
	return (new_table);
}
