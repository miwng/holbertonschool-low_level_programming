#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_t - Returns nth node of linked list
 *
 * @head: Pointer to head of list
 *
 * @index: int
 *
 * Return: nth node of linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
