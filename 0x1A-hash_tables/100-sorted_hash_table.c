#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the hash table
 * Return: hash table that is created or NULL otherwise
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *new_table;
	shash_node_t **new_array;

	new_table = malloc(sizeof(shash_table_t));
	if (!new_table)
		return (NULL);
	new_array = malloc(sizeof(shash_node_t) * size);
	if (!new_array)
		return (NULL);
	i = 0;
	while (i < size)
	{
		new_array[i] = NULL;
		i++;
	}
	new_table->array = new_array;
	new_table->size = size;
	new_table->shead = NULL;
	new_table->stail = NULL;
	return (new_table);
}
/**
 * add_shsh_nd - adds node at start of hash index
 * @ht: hash table
 * @key: key of the table
 * @val: value referenced by the key
 * Return: node that is created
 */
shash_node_t *add_shsh_nd(shash_node_t **ht, const char *key, const char *val)
{
	shash_node_t *temp = *ht;

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(val);
			return (temp);
		}
		temp = temp->next;
	}
	temp = malloc(sizeof(shash_node_t));
	if (!temp)
		return (NULL);
	temp->key = strdup(key);
	temp->value = strdup(val);
	temp->next = *ht;
	*ht = temp;
	return (*ht);
}
/**
 * add_node_shash - adds node on the shash table DLL
 * @ht: hash table
 * @new_node: new node
 */
void add_node_shash(shash_table_t *ht, shash_node_t *new_node)
{
	int i;
	shash_node_t *temp = ht->shead, *temp1 = ht->shead;

	while (temp)
	{
		i = strcmp(new_node->key, temp->key);
		if (i < 0)
		{
			new_node->sprev = temp->sprev;
			if (temp->sprev)
				temp->sprev->snext = new_node;
			else
				ht->shead = new_node;
			temp->sprev = new_node;
			new_node->snext = temp;
			return;
		}
		else if (i == 0)
			return;
		temp1 = temp;
		temp = temp->snext;
	}
	new_node->sprev = temp1;
	new_node->snext = NULL;
	if (ht->shead)
		temp1->snext = new_node;
	else
		ht->shead = new_node;
	ht->stail = new_node;
}
/**
 * shash_table_set - used to add a new node to a shash table
 * @ht: hash table
 * @key: key of a shash table
 * @value: value associated with key of a hash table
 * Return: 1 for success and 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node;
	unsigned long int index;

	if (!ht || !key || *key == '\0')
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	new_node = add_shsh_nd(&(ht->array[index]), key, value);
	if (!new_node)
		return (0);
	add_node_shash(ht, new_node);

	return (1);
}
/**
 * shash_table_get - used to retrieve a value for a particular key
 * @ht: hashed table
 * @key: key to the hash table
 * Return: value associated with the key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *temp = NULL;
	unsigned long int index;

	if (!ht || !key || *key == '\0')
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
/**
 * shash_table_print - prints key: value of a hash table
 * @ht: hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	char *space = "";
	shash_node_t *temp = NULL;

	if (!ht)
		return;
	printf("{");
	temp = ht->shead;
	while (temp)
	{
		printf("%s'%s': '%s'", space, temp->key, temp->value);
		space = ", ";
		temp = temp->snext;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - prints hash table in reverse
 * @ht: hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	char *space = "";
	shash_node_t *temp = NULL;

	if (!ht)
		return;
	printf("{");
	temp = ht->stail;
	while (temp)
	{
		printf("%s'%s': '%s'", space, temp->key, temp->value);
		space = ", ";
		temp = temp->sprev;
	}
	printf("}\n");
}
/**
 * shash_table_delete - free a shash table
 * @ht: hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *temp, *temp1;
	unsigned long int i = 0;

	if (!ht)
		return;
	while (i < ht->size)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			temp1 = temp;
			temp = temp->next;
			free(temp1->key);
			free(temp1->value);
			free(temp1);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
