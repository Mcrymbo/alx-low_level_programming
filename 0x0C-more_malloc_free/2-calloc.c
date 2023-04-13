#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory to array
 * @nmemb: array
 * @size: bytes of array
 * Return: no return
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	if (nmemb == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if ( s == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*(s + i) = 0;
	return (s);
}
