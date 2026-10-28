#include "main.h"

/**
 * print_alphabet - Affiche l'alphabet en minuscule suivi d'un saut de ligne.
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar (ch);
	}
		_putchar ('\n');
}
