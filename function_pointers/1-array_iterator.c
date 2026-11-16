#include "function_pointers.h"

/**
 * array_iterator - Exécute une fonction, fournie en paramètre,
 * sur chaque élément d'un tableau.
 * @array: Tableau d'entiers à parcourir.
 * @size: La taille du tableau.
 * @action: Pointeur vers la fonction appelé avec la
 * valeur de chaque élément.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
