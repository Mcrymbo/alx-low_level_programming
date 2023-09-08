#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *temp1;
	unsigned long int i = 0;

	if (!ht)
		return;
	while (i < ht->size)
	{
		temp = ht->array[i];
		while ((temp1 = temp) != NULL)
		{
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
