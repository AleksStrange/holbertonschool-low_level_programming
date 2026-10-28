#include "main.h"

/**
 * print_last_digit - Affiche le dernier chiffre d'un nombre.
 *@d: Nombre de base dont on ne va afficher que le dernier chiffre.
 *
 * Return: Always last
 */
int print_last_digit(int d)
{
	int last;

	last = d % 10;
	if (d >= 0)
	{
		_putchar ('0' + last);
		return (last);
	}
	else
	{
		last = -last;
		_putchar ('0' + last);
		return (last);
	}
}
