#include "lists.h"
/**
 * list_len - function that returns the number of elements
 * in a linked list_t list
 * @h: a pointer to the linked list
 * Return: the number of elements of the linked list
 */
size_t list_len(const list_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
