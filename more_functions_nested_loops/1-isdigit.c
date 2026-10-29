#include "main.h"

/**
 * _isdigit - Vérifie si il sagit d'un chiffre (de 0 à 9).
 * @c: le caractère à vérifier.
 *
 * Return: 1 (si c'est un chiffre) ou sinon 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
