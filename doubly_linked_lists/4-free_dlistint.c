#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - Frees list
 *
 * @head: Pointer to head of list
 *
 * Return: Free list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *i;

	while (head)
	{
		i = head->next;
		free(head);
		head = i;
	}
}
