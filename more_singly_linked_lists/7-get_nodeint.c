#include "lists.h"
/**
 * *get_nodeint_at_index - function that returns the nth node of a listint_t
 * linked list
 * @head: a pointer to the linked list
 *@index: index of the node
 * Return: the nth node of the listint_t, or NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; n < index; n++)
	{
		while (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
