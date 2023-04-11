#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars
 * @size: size of array
 * @c: character
 * Return: pointer to array for sucess and NULL otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	i = 0;
	array = malloc(sizeof(c) * size);
	if (size == 0)
		return (NULL);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(array + i) = c;
	}
	return (array);
}
