#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: a pointer to the head of the linked list
 * @n:
 * Return: the head node's data (n), or 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *list;
	int i;

	if (*head == NULL)
		return (0);
	if (*head != NULL)
	{
		list = *head;
		i = (*head)->n;
		*head = (*head)->next;

		free(list);
	}

		return (i);
}
