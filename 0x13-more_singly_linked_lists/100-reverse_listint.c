#include "lists.h"

/**
 * reverse_listint - reverse a list
 * @head: first node
 * Return: pointer to head of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr, *new;

	curr = new = NULL;
	while (*head != NULL)
	{
		new = (*head)->next;
		(*head)->next = curr;
		curr = *head, *head = new;
	}
	*head = curr;
	return (*head);
}
