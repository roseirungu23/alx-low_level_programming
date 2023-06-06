#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * listint_len - returns the number of elements
 * @h: linked list of type listint_t to be returned
 *
 * Return: No. of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
