#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a linked list.
 * @h: Pointer to list_t list.
 *
 * Return: Number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;

		s++;
	}
	return (s);
}
