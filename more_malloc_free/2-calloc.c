#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - Alloue de la mémoire pour un tableau, en utilisant `malloc`.
 * @nmemb: Nombre d'éléments du tableau.
 * @size: Taille en octets de chaque élément du tableau.
 *
 * Return: Pointeur vers l'adresse de la zone mémoire alloué,
 * ou NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
