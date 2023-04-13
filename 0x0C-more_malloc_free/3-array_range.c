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
	int *array, i;

	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++)
		;
	array = malloc(sizeof(array) * (max - min) + 1);
	if (array == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		*(array + i) = min;
	return (array);
}
