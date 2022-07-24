#include "lists.h"
/**
 * *insert_dnodeint_at_index - function that inserts a new node at
 * a given position
 * @h: a double pointer to the head of the doubly linked list
 * @idx: the index of the list where the new node should be added
 * (it starts at 0)
 * @n: the integer (value) for the new node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	dlistint_t *new, *tmp = *h;
	unsigned int a;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (a = 1; a < idx; a++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
