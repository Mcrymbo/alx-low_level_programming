#include "lists.h"

/**
 * print_dlistint - prints all elements of a doubly linked list
 * @h: head pointer
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
