#include "lists.h"
/**
 * *add_dnodeint - function that adds a new node at the beginning
 * of a dlistint_t list
 * @head: a double pointer to the head of the doubly linked list
 * @n: the integer for the new node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	while (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;
