#include "main.h"

/**
 * _strcpy - Copie la chaine pointée par src, y compris l'octet nul de fin
 * "\0", vers le tampon pointé par dest.
 * @dest: Pointeur de l'adresse ou va aller la copie de la chaine.
 * @src:Pointeur de l'adresse d'ou vient la chaine.
 * Return: dest (l'adresse du début de la chaine de destination).
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
