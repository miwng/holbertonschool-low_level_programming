#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints elements of linked list.
 *
 * @h: List of nodes
 *
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (number);
}
