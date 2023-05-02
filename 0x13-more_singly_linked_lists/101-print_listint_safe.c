#include "lists.h"

/**
 * free_lst - free linked list
 * @head: first node
 * Return: no return
 */
void free_lst(listint_v **head)
{
	listint_v *curr, *temp;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints linked list
 * @head: first node
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_v *curr = NULL, *new, *temp;
	size_t len = 0;

	while (head != NULL)
	{
		new = malloc(sizeof(listint_v));
		if (new == NULL)
			exit(98);
		new->ptr = (void *)head;
		new->next = curr;
		curr = new;
		temp = curr;
		while (temp->next != NULL)
		{
			temp = temp->next;
			if (head == temp->ptr)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_lst(&curr);
				return (len);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		len++;
	}
	free_lst(&curr);
return (len);
}
