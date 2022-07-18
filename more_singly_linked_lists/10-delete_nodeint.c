#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index 'index'
 * of a listint_t linked list
 * @head: double pointer to the head of the linked list
 * @index: index of the node that should be deleted (it starts at 0)
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *list1, *list2 = *head;

	if (list2 == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(list2);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (list2->next == NULL)
			return (-1);
		list2 = list2->next;
	}

	list1 = list2->next;
	list2->next = list1->next;
	free(list1);
	return (1);
}
