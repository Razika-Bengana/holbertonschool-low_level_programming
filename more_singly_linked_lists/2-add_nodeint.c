#include "lists.h"
/**
 * *add_nodeint - function that adds a new node at the beginning of a
 * listint_t list
 * @head: pointer to the head of the linked list
 * @n: the value of int
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *list;

	list = malloc(sizeof(listint_t));

	if (list == NULL)
		return (NULL);

	list->n = n;
	list->next = *head;
	*head = list;
	return (*head);
}
