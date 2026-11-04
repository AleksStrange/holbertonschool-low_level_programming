#include "main.h"

/**
 * cap_string - Met en majuscule tous les mots d'une chaîne de caractères.
 * @s: Pointeur de l'adresse du début de la chaine.
 *
 * Return: La chaine (s).
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		else if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (s[i - 1] == ' ' || s[i - 1] == '\t' ||
				s[i - 1] == '\n' || s[i - 1] == ',' ||
				s[i - 1] == ';' || s[i - 1] == '.' ||
				s[i - 1] == '!' || s[i - 1] == '?' ||
				s[i - 1] == '"' || s[i - 1] == '(' ||
				s[i - 1] == ')' || s[i - 1] == '{' ||
				s[i - 1] == '}')
			{
				s[i] = s[i] - 32;
			}
		}
		i++;
	}
	return (s);
}
