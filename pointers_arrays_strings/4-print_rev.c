#include "main.h"

/**
 * print_rev - Affiche une chaine de caractères, à l'envers, suivie
 * d'un saut de ligne.
 * @s: Pointeur de l'adresse
 */
void print_rev(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	while (l >= 0)
	{
		_putchar (s[l]);
		l--;
	}
	_putchar ('\n');
}
