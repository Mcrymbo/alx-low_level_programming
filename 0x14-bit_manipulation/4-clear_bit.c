#include "main.h"

/**
 * clear_bit - sets a value of bit to 0 at specified position
 * @n: pointer to long integer
 * @index: position to clear
 * Return: 1 for success and -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);
	i = 1 << index;
	if (*n & i)
		*n ^= i;
	return (1);
}
