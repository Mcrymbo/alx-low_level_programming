#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to allocate
 * Return: memory address
 */
void *malloc_checked(unsigned int b)
{
	char *array;

	array = malloc(b);
	if (array == NULL)
		 exit (98);
	return (array);
}
