#include "main.h"

/**
 * get_bit - returns the value of bit
 * @n: integer
 * @index: bit position
 * Return: value of bit position at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > 64 && n == 0)
		return (0);
	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
			return (n & 1);
	}
	return (-1);
}
