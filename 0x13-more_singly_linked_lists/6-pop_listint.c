#include "lists.h"

/**
 * pop_listint - deletes a head node
 * @head: first node
 * Return: head node's data or 0 for empty list
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int node;

	if (*head == NULL)
		return (0);
	node = (*(head))->n;
	temp = (*(head))->next;
	free (*(head));
	*head = temp;
	return (node);
}
