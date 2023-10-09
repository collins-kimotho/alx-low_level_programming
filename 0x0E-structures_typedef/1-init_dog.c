#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog
 * @d: The dog struct to initialize
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: THe owner of the dog
 *
 * Return: Always 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
