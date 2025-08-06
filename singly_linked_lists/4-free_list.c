#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - Frees list
 *
 * @head: Pointer to head of list
 *
 * Return: Free list
 */

void free_list(list_t *head)
{
	list_t *i;

	while (head)
	{
		i = head->next;
		free(head->str);
		free(head);
		head = i;
	}
}
