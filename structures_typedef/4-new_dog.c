#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - Duplique une chaîne de caractères.
 * @str: La chaîne à dupliquer.
 *
 * Return: Pointeur vers l'adresse de la copie, ou NULL.
 */
static char *_strdup(char *str)
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
/**
 * Structure de base avant de faire ma fonction strdup.

#include "dog.h"
#include <stdio.h>

 * *new_dog - Crée un nouveau chien.
 * @name: Nom du chien.
 * @age: Age du chien.
 * @owner: Nom du propriétaire.
 *
 * Return: Pointeur vers l'adresse du nouveau chien, ou NULL.

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i;
	int lenname = 0;
	int lenowner = 0;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	if (name != NULL)
	{
		lenname = 0;
		while (name[lenname] != '\0')
		{
			lenname++;
		}
		d->name = malloc(sizeof(char) * lenname + 1);
		if (d->name == NULL)
		{
			free(d);
			return (NULL);
		}
		for (i = 0; i <= lenname; i++)
			d->name[i] = name[i];
	}
	else
	{
		d->name = NULL;
	}
	d->age = age;
	if (owner != NULL)
	{
		lenowner = 0;
		while (owner[lenowner] != '\0')
		{
			lenowner++;
		}
		d->owner = malloc(sizeof(char) * (lenowner + 1));
		if (d->owner == NULL)
		{
			free(d->name);
			free(d);
			return (NULL);
		}
		for (i = 0; i <= lenowner; i++)
			d->owner[i] = owner[i];
	}
	else
	{
		d->owner = NULL;
	}
	return (d);
}
 */