#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - Concatène deux chaînes de caractères.
 * @s1: Poiteur de l'adresse de la première chaine.
 * @s2: Pointeur de l'aresse de la deuxième chaine.
 *
 * Return: Pointeur vers l'espace mémoire alloué pour s1 et s2 à la suite.
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	conc = malloc(sizeof(char) * (len1 + len2 + 1));
	if (conc == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		conc[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		conc[i + j] = s2[j];
	}
	conc[i + j] = '\0';
	return (conc);
}
