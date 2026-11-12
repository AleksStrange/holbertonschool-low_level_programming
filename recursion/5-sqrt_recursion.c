#include "main.h"

/**
 * sqrt_helper - Vérifie récursivement si un nombre a
 * une racine carrée entière.
 * @n: Le nombre dont on cherche la racine.
 * @i: L'entier testé (incrémenté à chaque appel).
 *
 * Return: La racine carrée entière, ou -1 si elle n'existe pas.
 */
int sqrt_helper(int n, int i)
{
	if (i > n / i)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_helper(n, i + 1));
}
/**
 * _sqrt_recursion - Renvoie la racine carrée entière d'un nombre.
 * @n: Le nombre dont on veut la racine.
 *
 * Return: La racine carrée, ou -1 si aucune racine entière n'existe.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (sqrt_helper(n, 1));
}
