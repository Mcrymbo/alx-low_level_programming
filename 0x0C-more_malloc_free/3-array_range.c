#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: array address
 */
int *array_range(int min, int max)
{
	int *array;
	int i, j;

	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++)
		;
	array = malloc(sizeof(array) * i);
	if (array == NULL)
		return (NULL);
	for (j = 0; min <= max; j++, min++)
		*(array + j) = min;
	return (array);
}
