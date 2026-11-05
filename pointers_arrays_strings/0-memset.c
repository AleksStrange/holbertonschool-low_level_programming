#include "main.h"

/**
 * *_memset - Remplit une zone mémoire avec un octet constant.
 * @s: Pointeur de l'adresse du début de la zone mémoire.
 * @b: L'octet constant.
 * @n: Nombre d'octets.
 *
 * Return: Pointeur vers la zone mémoire (s).
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
	s[i] = b;
}
return (s);
}
