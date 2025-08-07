#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - Add new node at head of linked list.
 *
 * @head: Pointer to head of nodes
 *
 * @n: int for new node
 *
 * Return: Address of new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
