#include "search_algos.h"

/**
 * linear_skip - seaches a value in sorted skip list
 * @list: pointer to head node
 * @value: value to search
 * Return: pointer to first node with the value
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *express_lane;

	if (!list)
		return (NULL);

	express_lane = list->express;
	while (express_lane)
	{
		printf("Value checked at index ");
		printf("[%lu] = [%d]\n", express_lane->index, express_lane->n);
		if (express_lane->n >= value || !express_lane->express)
		{
			printf("Value found between indexes ");
			printf("[%lu] and [%lu]\n", list->index, express_lane->index);
			break;
		}
		list = express_lane;
		express_lane = express_lane->express;
	}
	while (list)
	{
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		if (list->n == value)
			return (list);
		else if (list->n > value)
			return (NULL);
		list = list->next;
	}
	return (NULL);
}
