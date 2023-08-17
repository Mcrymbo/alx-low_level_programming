#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beggining of dlistint_t
 * @head: head pointer
 * @n: data to add
 * Return: address of new element or NULL it fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, int n)
{
	dlistint_t *new;
	dlistint_t *curr;

	curr = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;

	if (curr != NULL)
	{
		while (curr->prev != NULL)
			curr = curr->prev;
	}
	new->next = curr;
	if (curr != NULL)
		curr->prev = new;
	*head = new;
	return (new);
}
