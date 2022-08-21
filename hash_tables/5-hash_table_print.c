#include "hash_tables.h"
#include <stdio.h>
#include <stddef.h>

/**
 * hash_table_print - function that prints a hash table
 * @ht: the hash table
 * Return: the result, or nothing if ht is NULL
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int a;
	hash_node_t *head = NULL;
	char *separator = "";

	if (!ht)
		return;
	printf ("{");

	for (a = 0; a < ht->size; a++)
	{
		head = ht->array[a];

		for(;head; head = head->next)
		{
			printf("%s'%s': '%s'", separator, head->key, head->value);
			separator = ", ";
		}
	}
	printf("}\n");
}
