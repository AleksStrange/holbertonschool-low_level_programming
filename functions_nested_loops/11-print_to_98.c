#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Affiche tous les entiers de n à 98, suivi d'un saut de ligne.
 * @n: Entier de départ.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	printf("\n");
}
