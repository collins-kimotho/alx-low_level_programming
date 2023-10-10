#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints a struct dog
 * @d: The dog struct to print
 *
 * Description: This function prints a variable of type struct dog.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.1f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->name : "(nil)");
	}
}
