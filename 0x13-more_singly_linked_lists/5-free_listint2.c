#include "lists.h"

/**
 * free_listint2 - free list
 * @head: first node of the list
 * Return: no return
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *temp1;

	if (head)
	{
		temp1 = *head;
		while (!(temp = temp1))
		{
			temp1 = temp1->next;
			free(temp);
		}
		*head = NULL;
	}
}
