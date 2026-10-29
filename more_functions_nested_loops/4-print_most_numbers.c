#include "main.h"

/**
 * print_most_numbers - Affiche les chiffres de 0 à 9 sauf 2 et 4, suivi d'un
 * saut de ligne.
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n != 2 && n != 4)
		{
			_putchar ('0' + n);
		}
	}
	_putchar ('\n');
}
