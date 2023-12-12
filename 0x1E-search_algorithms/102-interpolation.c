#include "search_algos.h"

/**
 * interpolation_search - seaches value in a sorted array
 * using interpolation search algorithm
 * @array: pointer to inter array
 * @size: array size
 * @value: vale to search
 * Return: index of the serach value
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = (int)size - 1;
	int mid = -1;

	if (!array)
		return (-1);
	while (low <= high)
	{
		mid = (int)(low + (((double)(high - low) /
				   (array[high] - array[low])) * (value - array[low])));
		printf("Value checked array[%d]", mid);
		if (low == high || array[low] == array[high])
			break;
		if (mid >= (int)size)
		{
			printf(" is out of range\n");
			break;
		}
		else
			printf(" = [%d]\n", array[mid]);

		if (array[mid] == value)
		{
			return (mid);
		}
		else
		{
			if (array[mid] < value)
				low = mid + 1;
			else if (array[mid] > value)
				high = mid - 1;
		}
	}
	return (-1);
}
