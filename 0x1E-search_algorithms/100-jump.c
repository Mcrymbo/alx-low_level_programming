#include "search_algos.h"

/**
 * jump_search - searches integer using jump search algorithm
 * @array: pointer to element in an array
 * @size: array size
 * @value: value to search
 * Return: index of value in array, -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = (int)sqrt((double)size);
	int i = 0, j = 0, prev = 0;

	if (!array)
		return (-1);
	do {
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		j++;
		prev = i;
		i = j * jump;
	} while (i < (int)size && array[i] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, i);
	for (; prev <= i && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
