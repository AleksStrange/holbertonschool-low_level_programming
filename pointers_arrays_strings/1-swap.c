#include "main.h"

/**
 * swap_int - Echange les valeurs de deux entiers.
 * @a: Pointeur de l'adresse du premier entier.
 * @b: Pointeur de l'adresse du deuxieme entier.
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
