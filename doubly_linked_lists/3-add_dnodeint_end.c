#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - Add new node at head of linked list.
 *
 * @head: Pointer to head of nodes
 *
 * @n: int for new node
 *
 * Return: Address of new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *end;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	end = *head;
	while (end->next != NULL)
		end = end->next;
	end->next = new;
	new->prev = end;

	return (new);
}
