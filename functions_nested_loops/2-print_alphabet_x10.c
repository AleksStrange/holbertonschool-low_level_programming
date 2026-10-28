#include "main.h"

/**
 * print_alphabet_x10 - Affiche l'alphabet en minuscule 10 fois suivi
 * d'un saut de ligne.
 */
void print_alphabet_x10(void)
{
	char ch;
	int multi;

	for (multi = 0; multi < 10; multi++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar (ch);
		}
			_putchar ('\n');
}
}
