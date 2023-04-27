#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: start of list
 * Return: no return
 */
void free_list(list_t *head)
{
	list_t *curr;

	while ((curr = head) != NULL)
	{
		head = head->next;
		free(curr->str);
		free(curr);
	}
}
