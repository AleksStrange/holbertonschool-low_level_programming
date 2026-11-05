#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Affiche la somme des deux diagonales
 * d'une matrice carrée d'entiers.
 * @a:Pointeur de l'adresse du tableau.
 * @size: Taille du tableau.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int somme1 = 0;
	int somme2 = 0;

	for (i = 0; i < size; i++)
	{
		somme1 += a[i * size + i];
		somme2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", somme1, somme2);
}
