#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - Concatène deux chaînes de caractères avec une
 * limite de n octets.
 * @s1: Pointeur de l'adresse du début de la première chaine.
 * @s2: Pointeur de l'adresse du début de la deuxième chaine.
 * @n: Nombre d'octet de s2 à concaténer.
 *
 * Return: Pointeur vers l'adresse de la zone alloué ou NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	unsigned int len1 = 0, len2 = 0;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n >= len2)
	{
		conc = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	else
	{
		conc = malloc(sizeof(char) * (len1 + n + 1));
	}
	if (conc == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		conc[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0' && j < n; j++)
	{
		conc[i + j] = s2[j];
	}
	conc[i + j] = '\0';
	return (conc);
}
