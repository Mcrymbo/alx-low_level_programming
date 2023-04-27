#include "lists.h"

/** add_node_end - adds a new node to the end of the list
 * @head: start of the list
 * @str: string to store the list
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t n_char;
	list_t *new, *tm;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (n_char = 0; str[n_char]; n_char++)
		;
	new->len = n_char;
	new->next = NULL;
	tm = *head;
	if (tm == NULL)
		*head = new;
	else
	{
		while (tm->next != NULL)
			tm = tm->next;
		tm->next = new;
	}
	return (*head);
}
