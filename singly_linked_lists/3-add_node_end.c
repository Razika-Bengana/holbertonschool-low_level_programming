#include "lists.h"
/**
 * *add_node_end - function that adds a new node at the end of a list_t list
 * @head: head of the linked list
 * @str: the string that needs to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t n;
	list_t *list, *list2;

	list = malloc(sizeof(list_t));

	if (list == NULL)
		return (NULL);

	list->str = strdup(str);
	for (n = 0; str[n]; n++)
		;
	list->len = n;
	list->next = NULL;
	list2 = *head;
	if (list2 == NULL)
	{
		*head = list;
	}
	else
	{
		while (list2->next != NULL)
			list2 = list2->next;
		list->next = list;
	}
	return (*head);
}
