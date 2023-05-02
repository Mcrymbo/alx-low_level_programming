#include "lists.h"

/**
 * free_listint_safe - frees list
 * @h: first node
 * Return: size of list freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_v *curr = NULL, *new, *temp;
	listint_t *prev;
	size_t len = 0;

	while (*h != NULL)
	{
		new = malloc(sizeof(listint_v));
		if (new == NULL)
			exit(98);
		new->ptr = (void *)*h;
		new->next = curr;
		curr = new;
		temp = curr;
		while (temp->next != NULL)
		{
			temp = temp->next;
			if (*h == temp->ptr)
			{
				*h = NULL;
				free_lst(&curr);
				return (len);
			}
		}
		prev = *h;
		*h = (*h)->next;
		free(prev);
		len++;
	}
	*h = NULL;
	free_lst(&curr);
	return (len);
}
