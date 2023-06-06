#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * add_nodeint - adds new node at the beginning of a listint_t list
 * @head: pointer to the first node
 * @n: data to insert in the new node
 *
 * Return: pointer to new node, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return(new);
}