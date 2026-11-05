#include "main.h"

/**
 * _strspn - Détermine la longueur d'une sous-chaîne préfixe.
 * @s: Pointeur de l'adresse du début de la chaine.
 * @accept: Chaine de caractères ou sont présent les octets.
 *
 * Return: Le nombre de caractères du segment initial de s
 * constitués uniquement d'octets d'accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int j;

	while (s[n] != '\0')
	{
		j = 0;
		while (accept[j] != '\0' && accept[j] != s[n])
		{
			j++;
		}
		if (accept[j] == '\0')
		{
			break;
		}
		n++;
	}
	return (n);
}
