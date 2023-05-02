#include "lists.h"

/**
 * insert_nodeint_at_index - add a node at index
 * @head: first node
 * @idx: index to add node
 * @n: integer to add
 * Return:address to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curr, *new;
	unsigned int i;

	curr = *head;
	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && curr != NULL; i++)
			curr = curr->next;
	}
	if (curr == NULL && idx != 0)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = curr->next;
		curr->next = new;
	}
	return (new);
}
