#include "main.h"

/**
 * _strcmp - Compare deux chaines de caractères.
 * @s1: Première chaine à comparer.
 * @s2: Deuxième chaine à comparer.
 *
 * Return: 0 si les chaînes sont égales,
 * ou la différence des caractères sinon.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
