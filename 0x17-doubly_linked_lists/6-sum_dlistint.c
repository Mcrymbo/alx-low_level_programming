#include "lists.h"

/**
 * sum_dlistint - add all the data in the list
 * @head: head pointer
 * Return: sum of data in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
