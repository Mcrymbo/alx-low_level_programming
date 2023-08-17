#include "lists.h"

/**
 * add_dnodeint_end - add node at end of dlistint
 * @head: head pointer
 * @n: data to add
 * Return: address of new element, or NULL if fail
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *curr;

	curr = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (curr != NULL)
	{
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = new;
	}
	else
		*head = new;
	new->prev = curr;
	return (new);
}
