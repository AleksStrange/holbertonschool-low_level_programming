#include "main.h"

/**
 * print_square - Affiche un carré, suivi d'un saut de ligne.
 * @size: La taille du carré.
 */
void print_square(int size)
{
	int l;
	int c;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (c = 0; c < size; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
