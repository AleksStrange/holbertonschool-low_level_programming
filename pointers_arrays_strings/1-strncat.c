#include "main.h"

/**
 * _strncat - Concatène deux chaînes de caractères avec
 * une limite de n octets.
 * @dest: La chaîne de destination.
 * @src: La chaîne source à ajouter.
 * @n: Le nombre maximal d'octets à copier depuis src.
 *
 * Return: Un pointeur vers la chaîne de destination (dest).
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
