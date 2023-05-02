#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: first node
 * @index: index of node to delete
 * Return: 1 if success, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr = *head, *new;
	unsigned int i;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && curr != NULL; i++)
			curr = curr->next;
	}
	if ((index != 0 && curr->next == NULL) || curr == NULL)
		return (-1);
	new = curr->next;
	if (index != 0)
	{
		curr->next = new->next;
		free(new);
	}
	else
	{
		free(curr), *head = new;
	}
	return (1);
}
