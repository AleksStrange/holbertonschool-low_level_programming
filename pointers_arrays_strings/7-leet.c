#include "main.h"

/**
 * *leet - Encode une chaîne de caractères en « 1337 ».
 * @s: Pointeur de l'adresse du début de la chaine.
 *
 * Return: La chaine de caractères (s).
 */
char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char l[] = "aAeEoOtTlL";
	char r[] = "4433007711";


	while (s[i] != '\0')
	{
		j = 0;
		while (l[j] != '\0')
		{
			if (s[i] == l[j])
			{
				s[i] = r[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
