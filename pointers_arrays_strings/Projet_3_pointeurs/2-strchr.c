#include "main.h"
#include <stddef.h>

/**
 * *_strchr - Localise un caractère dans une chaîne de caractères.
 * @s: Pointeur de l'adresse du début de la chaine.
 * @c: Le caractère à rechercher.
 *
 * Return:un pointeur vers la première occurrence du caractère c
 * dans la chaîne s, ou NULL si le caractère n'est pas trouvé.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
