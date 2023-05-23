#include "dog.h"

/**
 * init_dog - initializes struct of type dog
 * @d: pointer to structure
 * @name: pointer to dog name
 * @age: age of the dog
 * @owner: pointer to dog owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
