#include "search_algos.h"

/**
 * binary_recurse - implements binary search recursively
 * @array: pointer to array of integers
 * @size: array size
 * @value: value to search
 * Return: index of value in the array, -1 otherwise
 */
int binary_recurse(int *array, size_t size, int value)
{
	size_t mid = size / 2, i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (mid && size % 2 == 0)
		mid--;

	if (value == array[mid])
	{
		if (mid > 0)
			return (binary_recurse(array, mid + 1, value));
		return ((int)mid);
	}

	if (value < array[mid])
		return (binary_recurse(array, mid + 1, value));

	mid++;
	return (binary_recurse(array + mid, size - mid, value) + mid);
}

/**
 * advanced_binary - searches for value in array using BSA
 * @array: pointer to array of integers
 * @size: array size
 * @value: value to search
 * Return: index of value in the array, -1 otherwise
 */
int advanced_binary(int *array, size_t size, int value)
{
	int i;

	i = binary_recurse(array, size, value);
	if (i >= 0 && array[i] != value)
		return (-1);
	return (i);
}
