#include "main.h"
#include <stdlib.h>

/**
 * *create_array - Crée un tableau de caractères et l'initialise
 * avec un caractère donné.
 * @size: Taille du tableau.
 * @c: Pointeur sur l'adresse du premier caractère du tableau.
 *
 * Return: Pointeur sur le tableau, ou NULL si la taille du tableau est 0.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(*arr) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
