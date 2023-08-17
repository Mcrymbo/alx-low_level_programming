#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes  a node at index
 * @head: head pointer
 * @index: index location of the node
 * Return: 1 if deleted and -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *curr = *head, *temp;

	if (curr != NULL)
		while (curr->prev != NULL)
			curr = curr->prev;
	while (curr != NULL)
	{
		if (count == index)
		{
			if (count == 0)
			{
				*head = curr->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				temp->next = curr->next;
				if (curr->next != NULL)
					curr->next->prev = temp;
			}
			free(curr);
			return (1);
		}
		temp = curr;
		curr = curr->next;
		count++;
	}
	return (-1);
}

