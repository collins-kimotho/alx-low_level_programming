#include<stdio.h>
#include "dog.h"
/*
 * init_dog.c
 *
 * This function initializes a variable of type struct dog.
 *
 * @param d A pointer to the structure to be initialized.
 * @param name The name of the dog.
 * @param age The age of the dog.
 * @param owner The name of the owner of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Assign the value of name to the name member of the structure.*/
	d->name = name;

	/* Assign the value of age to the age member of the structure. */
	d->age = age;

	/* Assign the value of owner to the owner member of the structure. */
	d->owner = owner;
}
