#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert new node at given position
 *
 * @h: Pointer to head of list
 *
 * @idx: int
 *
 * @n: int
 *
 * Return: New node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *i = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		i = i->next;
		if (i == NULL)
			return (NULL);
	}

	if (i->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = i;
	new->next = i->next;
	i->next->prev = new;
	i->next = new;

	return (new);
}
