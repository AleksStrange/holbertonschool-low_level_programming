#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - Duplique une chaîne de caractères.
 * @str: La chaîne à dupliquer.
 *
 * Return: Pointeur vers l'adresse de la copie, ou NULL.
 */
char *_strdup(char *str)
{
	int i;
	int len = 0;
	char *dup;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		dup[i] = str[i];
	return (dup);
}

/**
 * new_dog - Crée un nouveau chien.
 * @name: Nom du chien.
 * @age: Âge du chien.
 * @owner: Nom du propriétaire.
 *
 * Return: Pointeur vers le nouveau dog_t, ou NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = _strdup(name);
	if (name != NULL && d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->age = age;

	d->owner = _strdup(owner);
	if (owner != NULL && d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	return (d);
}
