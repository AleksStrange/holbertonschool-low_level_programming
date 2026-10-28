#include "main.h"

/**
 * _abs - Calcule la valeur absolue d'un entier.
 * @a: Valeur de l'entier.
 *
 * Return: a (si positif ou zéro) ou -a (si négatif)
 */
int _abs(int a)
{
	if (a < 0)
{
		return (-a);
}
	else
{
		return (a);
}
}
