#include "main.h"

/**
 * puts_half - Affiche la moitié d'une chaine de caractères, suivi d'un
 * saut de ligne.
 * @str: Pointeur de l'adresse du début de la chaine de caractères.
 */
void puts_half(char *str)
{
	int longe = 0;
	int pdd;

	while (str[longe] != '\0')
	{
		longe++;
	}
	if (longe % 2 == 0)
	{
		pdd = longe / 2;
	}
	else
	{
		pdd = (longe + 1) / 2;
	}
	while (str[pdd] != '\0')
	{
		_putchar(str[pdd]);
		pdd++;
	}
	_putchar('\n');
}
