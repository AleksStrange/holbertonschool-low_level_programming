#include "main.h"

/**
 * string_toupper - Transforme toutes les lettres minuscules d'une chaîne
 *  de caractères en majuscules.
 *@s: Pointeur de l'adresse du début de la chaine.
 *
 * Return: la chaine (s).
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
