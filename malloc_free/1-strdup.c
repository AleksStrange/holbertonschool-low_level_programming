#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - Renvoie un pointeur vers un espace mémoire nouvellement alloué,
 * contenant une copie de la chaîne de caractères passée en paramètre.
 * @str: Chaine de caractères à copier.
 *
 * Return: Pointeur sur l'adresse de la mémoire alloué pour la copie, (copy).
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int len = 0;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		copy[i] = str[i];
	}
	return (copy);
}
