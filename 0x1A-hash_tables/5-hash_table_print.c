#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i = 0;
	char *space = "";

	if (!ht)
		return;
	printf("{");
	while (i < ht->size)
	{
		temp = ht->array[i];
		while (temp)
		{
			printf("%s'%s': '%s'", space, temp->key, temp->value);
			space = ", ";
			temp = temp->next;
		}
		i++;
	}
	printf("}\n");
}
