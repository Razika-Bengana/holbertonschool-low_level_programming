#include "lists.h"
/**
 * *add_node - function that adds a new node at the beginning of a list_t list
 * @head: head of the linked list
 * @str: the string that needs to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int n;
	list_t *list;

	list = malloc(sizeof(list_t));

	if (list == NULL)
		return (NULL);

	list->str = strdup(str);
	for (n = 0; str[n]; n++)
		;
	list->len = n;
	list->next = *head;
	*head = list;
	return (*head);
}
