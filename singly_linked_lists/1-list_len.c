#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - Prints length of linked list.
 *
 * @h: List of nodes
 *
 * Return: Number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}
