#include "main.h"

/**
 * print_sign - Affiche le signe d'un nombre négatif, positif ou zero).
 * @n: le caractère à vérifier.
 *
 * Return: 1 (et +, si positif)
 * 0 (et 0, si égal a zéro)
 * -1 (et -, si négatif)
 */
int print_sign(int n)
{
	if (n > 0)
{
	_putchar ('+');
	return (1);
}
	else if (n < 0)
{
	_putchar ('-');
	return (-1);
}
	else
{
	_putchar ('0');
	return (0);
}
}
