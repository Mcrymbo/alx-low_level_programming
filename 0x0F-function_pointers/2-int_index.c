#include "function_pointers.h"

/**
 * int_index - performs integer search
 * @array: integer array
 * @size: array size
 * @cmp: function pointer
 * Return: 1 for success and -1 for failure
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
