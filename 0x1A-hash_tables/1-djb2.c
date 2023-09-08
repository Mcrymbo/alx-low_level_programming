#include "hash_tables.h"

/**
 * hash_djb2 - returns hashed string using djb2 algorithm
 * @str: string to hash
 * Return: hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;

	while (*str)
	{
		hash = (33 * hash) + (*str);
		str++;
	}
	return (hash);
}
