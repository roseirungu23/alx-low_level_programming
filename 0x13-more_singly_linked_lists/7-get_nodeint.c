#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * get_nodeint_at_index - returns a node at an index
 * @head: first node in the list
 * @index: index of the node
 *
 * Return: pointer to the node been looked for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
