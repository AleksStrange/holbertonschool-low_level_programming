#include "main.h"

/**
 * _puts_recursion - Affiche une chaîne de caractères,
 * suivie d'un saut de ligne.
 * @s: Pointeur vers l'adresse du début de la chaine.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
