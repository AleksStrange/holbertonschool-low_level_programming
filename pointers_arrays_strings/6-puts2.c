#include "main.h"

/**
 * puts2 - Affiche un caractère sur deux d'une chaine de caractères, en
 * commencant par le premier, suivi d'un saut de ligne.
 * @str: Pointeur de l'adresse du début de la chaine.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar (str[i]);
		i += 2;
	}
	_putchar ('\n');
}
