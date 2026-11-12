#include "main.h"

/**
 * _strlen_recursion - Renvoie la longueur d'une chaîne de caractères.
 * @s: Pointeur de l'adresse du début de la chaine.
 *
 * Return: La longeur de la chaine ou 0.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
