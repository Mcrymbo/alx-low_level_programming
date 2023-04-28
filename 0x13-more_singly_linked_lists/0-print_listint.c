#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: singley-linked lists
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}
	return (len);
}
