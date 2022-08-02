#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog.
 * @d: struct dog.
 * Return: none.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: ");
		if (!(d->name))
			printf("(nil)\n");
		else
			printf("%s\n", d->name);

		printf("Age: %f\n", d->age);

		printf("Owner: ");
		if (!(d->owner))
			printf("(nil)\n");
		else
			printf("%s\n", d->owner);
	}
}
