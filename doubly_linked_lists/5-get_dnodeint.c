#include "lists.h"
/**
 * *get_dnodeint_at_index - function that returns the nth node
 * of a dlistint_t linked list
 * @head: pointer to the head of the doubly linked list
 * @index : index of the node, starting from 0
 * Return: the nth node of the doubly linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	for (node = head; node != NULL; node = node->next)
	{
		if (i == index)
			return (node);
		i++;
	}

	return (0);
}
