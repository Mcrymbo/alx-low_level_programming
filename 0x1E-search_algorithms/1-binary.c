#include "search_algos.h"

/**
 * binary_search - searched for a value in sorted array
 * using binary search algorithm
 * @array: pointer to array of integers
 * @size: array size
 * @value: value to search
 * Return: index of the value in array if found, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = (int)size - 1;
	int mid, i;

	if (!array)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array");
		for (i = left; i < right + 1; i++)
			printf("%s %d", (i == left) ? ":" : ",", array[i]);
		printf("\n");

		mid = (left + right) / 2;

		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else if (array[mid] == value)
			return (mid);
	}
	return (-1);
}
