#ifndef LIST_H
#define LIST_H

#include <stdlib.h>
#include <stdio.h>

int _putchar (char c);
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	    int n;
	    struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t *reverse_listint(listint_t **head);

/**
 * struct listint_v - singly liinked list to a void
 * @prt: points to current node
 * @next: points to next node
 * Return: no return
 */
typedef struct listint_v
{
	void *ptr;
	struct listint_v *next;
} listint_v;
size_t print_listint_safe(const listint_t *head);

#endif
