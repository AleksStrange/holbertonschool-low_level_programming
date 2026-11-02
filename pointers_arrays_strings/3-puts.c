#include "main.h"

/**
 * _puts - Affiche une chaine de caractères, suivi d'un saut de ligne, sur
 * la sortie standard (stdout).
 * @str: Pointeur de l'adresse de la première lettre de la chaine.
 */
void _puts(char *str)
{
	int l = 0;

	while (str[l] != '\0')
	{
		_putchar (str[l]);
		l++;
	}
	_putchar ('\n');
}
