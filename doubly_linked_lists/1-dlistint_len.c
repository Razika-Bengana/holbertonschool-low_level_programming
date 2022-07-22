#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements
 * in a linked dlistint_t list
 * @h: a pointer to the doubly linked list
 * Return: the number of elements of the doubly linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
