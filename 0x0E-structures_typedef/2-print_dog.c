#include <stdio.h>
#include <string.h>
#include "dog.h"
/**
 * print_dog - A program that print a contructed data type
 * @d: variable d
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		printf("name: %s \n", d->name);
		printf("age: %f \n", d->age);
		printf("owner: %s \n", d->owner);
	}
	if (d->name == NULL || d->age == 0.0 || d->owner == NULL)
	{
		printf("name: (nill) \n");
	}
}
