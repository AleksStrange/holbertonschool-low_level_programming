#include "main.h"

/**
 * print_triangle - Affiche un triangle, suivi d'un saut de ligne.
 * @size: La taille du triangle.
 */
void print_triangle(int size)
{
	int l, e, d;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (e = 0; e < size - 1 - l; e++)
			{
				_putchar(' ');
			}
			for (d = 0; d <= l; d++)
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
