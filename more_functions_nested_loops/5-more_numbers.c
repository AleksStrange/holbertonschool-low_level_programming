#include "main.h"

/**
 * more_numbers - Affiche 10 fois les nombres de 0 à 14, suivi
 * d'un saut de ligne.
 */
void more_numbers(void)
{
	int multi;
	int chaine;

	for (multi = 0; multi < 10; multi++)
	{
		for (chaine = 0; chaine <= 14; chaine++)
		{
			if (chaine >= 10)
			{
				_putchar ('1');
			}
			_putchar ('0' + (chaine % 10));
		}
			_putchar ('\n');
}
}
