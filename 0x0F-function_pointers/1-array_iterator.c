#include "function_pointers.h"

/**
 * array_iterator - pointer to a function that executes another function
 * @array: array
 * @size: array size
 * @action: action function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

		for (i = 0; j < size; i++)
			action(array[i]);
}