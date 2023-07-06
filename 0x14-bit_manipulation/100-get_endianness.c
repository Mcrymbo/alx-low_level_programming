#include "main.h"

/**
 * get_endianness - checks endianness
 * Return: 0 for big endian and 1 for little endian
 */
int get_endianness(void)
{
	char *c;
	unsigned int i = 1;

	c = (char *) &i;
	return ((int) *c);
}
