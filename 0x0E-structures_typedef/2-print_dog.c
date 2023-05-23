#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to structure
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n");
		else
			printf("Name: (nil)\n");
		printf("Age: %.6f\n", d->owner);
		if (d->owner != NULL)
			printf("owner: %s\n", d->owner);
		else
			printf("owner: nil\n");
	}
}
