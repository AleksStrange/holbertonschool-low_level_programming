#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - Alloue de la mémoire à l'aide de `malloc`.
 * @b: Nombre d'octets à allouer.
 *
 * Return: Le pointeur de l'adresse du début de
 * la zone mémoire alloué (ptr).
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
