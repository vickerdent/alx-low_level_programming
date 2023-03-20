#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - check the code
 * @d: struct
 * Return: Always 0.
 */

void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
d->name = "(nil)";
if (d->owner == NULL)
d->owner = "(nil)";

printf("Name: %s\nAge: %0.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
