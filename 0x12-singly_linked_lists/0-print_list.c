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
	
	printf("[");
	
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("%s", h->str);
		}
		else
		{
			printf("[0] (nil)");
		}
		s++;

		if (h->next != NULL)
		{
			printf(", ");
		}

		h = h->next;
	}
	printf("]\n");

	return (s);
}
