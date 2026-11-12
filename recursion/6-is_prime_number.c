#include "main.h"

/**
 * prime_helper - Vérifie récursivement si un nombre a des diviseurs.
 * @n: Le nombre à tester.
 * @i: Le diviseur courant.
 * Return: 1 si aucun diviseur n'est trouvé, 0 sinon.
 */
int prime_helper(int n, int i)
{
	if (i > n / i)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime_helper(n, i + 1));
}

/**
 * is_prime_number - Vérifie si un entier est un nombre premier.
 * @n: Le nombre à évaluer.
 * Return: 1 si n est premier, 0 sinon.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime_helper(n, 2));
}
