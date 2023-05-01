#include "lists.h"

/**
 * listint_len - determines the number of elements in a list
 * @h: singly linked list
 * Return: number of elements of a list
 */
size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
