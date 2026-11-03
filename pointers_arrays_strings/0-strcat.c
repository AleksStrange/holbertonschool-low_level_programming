#include "main.h"

/**
 * _strcat - Concatène deux chaînes de caractères.
 * @dest: Pointeur de l'adresse de la chaine de destination.
 * @src: Pointeur de l'adresse de la chaine source.
 * Return: dest ( Avec src au bout de dest).
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
