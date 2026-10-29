#include "main.h"

/**
 * print_numbers - Affiche le chiffres de 0 à 9, suivi d'un saut de ligne.
 */
void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
	_putchar (n);
	}
	_putchar ('\n');
}
