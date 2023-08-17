#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t
 * @head: head pointer
 * @index: index location
 * Return: node indexed or NULL if it does not exists
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr = head;
	unsigned int n = 0;

	if (curr != NULL)
		while (curr->prev != NULL)
			curr = curr->prev;

	while (curr != NULL)
	{
		if (n == index)
			return (curr);
		n++;
		curr = curr->next;
	}
	return (NULL);
}
