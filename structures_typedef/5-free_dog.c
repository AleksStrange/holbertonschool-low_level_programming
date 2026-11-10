#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Libère la mémoire allloué pour dog_t.
 * @d: poiteur vers l'adresse du dog_t à libérer.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name != NULL)
	{
		free(d->name);
	}
	if (d->owner != NULL)
	{
		free(d->owner);
	}
	free(d);
}
