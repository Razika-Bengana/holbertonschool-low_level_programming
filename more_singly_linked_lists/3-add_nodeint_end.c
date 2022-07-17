#include "lists.h"
/**
 * *add_nodeint_end - function that adds a new node at the end of
 * a listint_t list
 * @head: ppointer to the head of the linked list
 * @n: the value of int
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *list2, *temp;

	list2 = malloc(sizeof(listint_t));

	if (list2 == NULL)
		return (NULL);

	list2->n = n;
	list2->next = NULL;

	if (*head == NULL)
		*head = list2;

	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = list2;
	}
	return (*head);
}
