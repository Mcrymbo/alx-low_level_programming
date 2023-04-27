#include "lists.h"

/**
 * add_nodes - adds new nodes at beggining
 * @h: linked list
 * @str: string that stores list
 * Return: adderess of new node at beggining of list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t n_char;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (n_char = 0; str[n_char]; n_char++);
	new->len = n_char;
	new->next = *head;
	*head = new;
	return (*head);
}
