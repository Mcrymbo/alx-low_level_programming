#include "search_algos.h"

/**
 * jump_list - searches a value in sorted linked list
 * @list: pointer to head of singly linked list
 * @size: number of nodes
 * @value: value to search
 * Return: pointer to node whare value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *temp;
	size_t jump, idx = 0, j = 0;

	if (!list)
		return (NULL);
	jump = sqrt((double)size);

	do {
		temp = list;
		j++;
		idx = j * jump;
		while (list->next && list->index < idx)
			list = list->next;
		if (!list->next && idx != list->index)
			idx = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)idx, list->n);
	} while (idx < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)temp->index, (int)list->index);

	for (; temp && temp->index <= list->index; temp = temp->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)temp->index, temp->n);
		if (temp->n == value)
			return (temp);
	}
	return (NULL);
}
