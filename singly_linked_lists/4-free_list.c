#include "lists.h"
/**
 * free_list - function that frees a list_t list
 * @head:
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *list;

	while (head != NULL)
	{
		list = head;
		head = head->next;
		free(list);
	}
}
