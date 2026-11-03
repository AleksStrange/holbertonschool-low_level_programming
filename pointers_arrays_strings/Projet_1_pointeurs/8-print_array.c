#include "main.h"
#include <stdio.h>

/**
 * print_array - Affiche "n" éléments d'un tableau d'entiers, suivis
 * d'un saut de ligne.
 * @a: Pointeur de l'adresse du début du tableau d'entiers.
 * @n: Nombre d'éléments du tableaux.
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
			if (i < n - 1)
			{
				printf(", ");
			}
		i++;
	}
	printf("\n");
}
