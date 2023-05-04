#include "main.h"

/**
 * set_bit - sets a value of bit to 1 at index
 * @n: pointer long int
 * @index: position
 * Return: 1 for success and -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);
	i = 1 << index;
	*n = (*n | i);
	return (1);
}
