#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - Add node at the end
 *
 * @head: Pointer to head of list
 *
 * @str: String to add
 *
 * Return: Address of new string
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *clone;
	int len;
	list_t *new, *end;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	clone = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = clone;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}
	return (new);
}
