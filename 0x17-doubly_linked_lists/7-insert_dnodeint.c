#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at index
 * @h: head pointer
 * @idx: index location
 * @n: data
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 1;
	dlistint_t *curr = *h;
	dlistint_t *new;

	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		if (curr != NULL)
			while (curr->prev != NULL)
				curr = curr->prev;
		while (curr != NULL)
		{
			if (count == idx)
			{
				if (curr->next == NULL)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new == NULL)
						return (NULL);
					new->n = n;
					new->next = curr->next;
					new->prev = curr;
					curr->next->prev = new;
					curr->next = new;
				}
				break;
			}
			curr = curr->next;
			count++;
		}
	}
	return (new);
}
