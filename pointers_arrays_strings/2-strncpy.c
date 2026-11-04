#include "main.h"

/**
 * _strncpy - concatène deux chaines de caractères
 * @dest: La chaine de destination.
 * @src: La chaine source à ajouter.
 * @n: le nombre maximal d'octet à copier depuis src.
 *
 * Return: Un pointeur vers (dest).
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
