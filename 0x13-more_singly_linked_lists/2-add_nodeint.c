#include "lists.h"

/**
 * add_nodeint - add node at beggining of list
 * @head: first node of an element
 * @n: stores integer
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
