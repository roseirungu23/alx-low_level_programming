#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head of the linked list.
 * @index: Index of the node, starting from 0.
 *
 * Return: Pointer to the nth node. If the node does not exist, return NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current_node = head;

	while (current_node != NULL)
	{
		if (count == index)
			return (current_node);
		current_node = current_node->next;
		count++;
	}
	return (NULL);
}
