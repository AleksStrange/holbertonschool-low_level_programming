#include "main.h"

/**
 * *_memcpy - Copie une zone mémoire.
 * @dest: Pointeur de l'adresse de la zone mémoire de destination.
 * @src: Pointeur de l'adresse de la zone mémoire source.
 * @n: Nombre d'octets.
 *
 * Return: La zone mémoire (dest).
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
