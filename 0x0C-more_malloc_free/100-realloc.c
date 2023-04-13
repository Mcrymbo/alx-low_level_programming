#include "main.h"
#include <stdlib.h>

/**
 * _relloc - reallocates memory block
 * @ptr: pointer to old memory
 * @old_size: old memory size
 * @new_size: new memory size
 * Return: no return
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		ptr = malloc(new_size);
	free (ptr);
	ptr = malloc(new_size);
	return (ptr);
}
