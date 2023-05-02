#include "lists.h"

/**
 * sum_listint - sum all data of the list
 * @head: first node
 * Return: sum or 0 for empty list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
