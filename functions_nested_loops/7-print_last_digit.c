#include "main.h"

/**
 * print_last_digit - Affiche le dernier chiffre d'un nombre.
 *@d: Nombre de base dont on ne va afficher que le dernier chiffre.
 *
 * Return: (d%10) (si positif ou zéro) ou ((-d)%10) (si négatif).
 */
int print_last_digit(int d)
{
	if (d >= 0)
	{
		_putchar ('0' + (d % 10));
		return (d % 10);
	}
	else
	{
		_putchar ('0' + ((-d) % 10));
		return ((-d) % 10);
	}
}
