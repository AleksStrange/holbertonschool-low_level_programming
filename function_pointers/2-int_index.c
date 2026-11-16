#include "function_pointers.h"

/**
 * int_index - Recherche un entier dans un tableau.
 * @array: Tableau d'entiers a parcourir.
 * @size: Taille du tableau.
 * @cmp: Pointeur vers l'adresse de la fonction a appliquer (i) ou (-1).
 *
 * Return: L'indice du premier element pour lequel la fonction
 * `cmp` ne renvoie pas 0, ou (-1).
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
