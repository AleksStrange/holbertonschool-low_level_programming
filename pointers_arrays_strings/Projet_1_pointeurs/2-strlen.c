#include "main.h"

/**
 * _strlen - Renvoie la longueur d'une chaîne de caractères.
 * @s: Pointeur de l'adresse de la première lettre de la string.
 * Return: la variable l.
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
	l++;
	}
	return (l);
}
