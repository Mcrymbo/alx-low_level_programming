#include "hash_tables.h"

/**
 * key_index - returns the index of a key
 * @key: key of the hash table
 * @size: size of the hash hash table
 * Return: index at which key/value pair are stored in hash table
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value, index;

	if (!key || size == 0)
		return (0);
	value = hash_djb2(key);
	index = value % size;

	return (index);
}
