#include "lists.h"

/**
 * free_listint - free the list
 * @head: first node of list
 * Return: no return
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
