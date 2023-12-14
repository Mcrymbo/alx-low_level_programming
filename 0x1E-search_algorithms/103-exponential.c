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
/**
 * exponential_search - searches for a value in sorted array
 * using exponential seach algorithm
 * @array: pointer to sorted array
 * @size: array size
 * @value: value to search
 * Return: index in the array if found, -1 otherwise
 */
int exponential_search(int *array, size_t size, int value)
{
	int i = 1, n, res;

	if (!array)
		return (-1);

	if (array[0] == value)
		return (0);
	while (i < (int)size && array[i] < value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i *= 2;
	}
	n = (i >= (int)size) ? ((int)size - 1) : i;
	i /= 2;
	printf("Value found between indexes [%d] and [%d]\n", i, n);
	res = binary_search(array + i, (n + 1) - i, value);
	if (res >= 0)
		res += i;
	return (res);
}
