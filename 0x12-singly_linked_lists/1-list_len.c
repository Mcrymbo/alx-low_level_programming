#include "lists.h"

/**
 * list_len - number of elements
 * @h: linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t n_nodes = 0;

	while (h != NULL)
	{
		n_nodes++;
		h = h->next;
	}
	return (n_nodes);
}
