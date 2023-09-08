#include "hash_tables.h"

/**
 * add_hash_node - adds not at an the begining of a hash index
 * @ht: head of a hashed table
 * @key: key of the hash table
 * @value: value to store
 * Return: ht
 */
hash_node_t *add_hash_node(hash_node_t **ht, const char *key, const char *value)
{
	hash_node_t *temp = *ht;

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (*ht);
		}
		temp = temp->next;
	}
	temp = malloc(sizeof(hash_node_t));
	if (temp == NULL)
		return (NULL);
	temp->key = strdup(key);
	temp->value = strdup(value);
	temp->next = *ht;
	*ht = temp;
	return (*ht);
}

/**
 * hash_table_set - adds element to the hash table
 * @ht: hash table
 * @key: key of the hash table
 * @value: value associated with the key
 * Return: 1 if added successfully, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (!ht || !key || *key == '\0')
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	if (add_hash_node(&(ht->array[index]), key, value) == NULL)
		return (0);
	return (1);
}
