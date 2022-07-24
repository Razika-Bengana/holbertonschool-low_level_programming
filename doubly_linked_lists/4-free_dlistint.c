#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: a pointer to the head of the linked list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;

		free(tmp);
	}
}
