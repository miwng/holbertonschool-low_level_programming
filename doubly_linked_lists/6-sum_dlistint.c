#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - Returns sum of all data in linked list
 *
 * @head: Pointer to head of list
 *
 * Return: Sum of all data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
