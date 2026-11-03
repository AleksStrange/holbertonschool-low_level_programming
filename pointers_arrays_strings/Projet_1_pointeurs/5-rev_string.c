#include "main.h"

/**
 * rev_string - Inverse une chaine de caractère.
 * @s: Pointeur de l'adresse du debut de la chaine.
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char tmp;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (j < i)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		j++;
		i--;
	}
}
