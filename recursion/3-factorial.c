#include "main.h"

/**
 * factorial - Renvoie la factorielle d'un nombre donné.
 * @n: Le nombre dont on doit renvoyer la factoriel.
 *
 * Return: La factoriel de n ou (-1) en cas de négatif.
 */
int factorial(int n)
{
if (n == 0)
	return (1);
if (n < 0)
	return (-1);
return (n * factorial(n - 1));
}
