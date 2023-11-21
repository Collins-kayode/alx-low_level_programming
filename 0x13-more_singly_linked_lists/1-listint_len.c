#include "lists.h"
#include <stdio.h>

/**
 * listint_len -  counts the number of elements in a linked listint_t list
 * @h: pointer to header node
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
