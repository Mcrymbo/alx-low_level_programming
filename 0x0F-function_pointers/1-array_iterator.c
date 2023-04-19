#include "function_pointers.h"

/**
 * array_iterator - pointer to a function that executes another function
 * @array: array
 * @size: array size
 * @action: action function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array && action)
	{
		for (j = 0; j < size; j++)
			action(*(array + j));
	}
}
