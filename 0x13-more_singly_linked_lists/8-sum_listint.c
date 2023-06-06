#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * sum_listint - calculate the sum of all the data
 * @head: first node in the list
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
