#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk - Recherche, dans une chaîne de caractères,
 * l'un des octets appartenant à un ensemble donné.
 * @s: Pointeur de l'adresse du début de la chaine.
 * @accept: Chaine ou se trouve les octets acceptés.
 *
 * Return: Un pointeur vers l'octet dans (s) qui correspond à l'un des
 * octets dans (accept).
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	for ( ; *s != '\0'; s++)
		for (j = 0; accept[j] != '\0'; j++)
			if (*s == accept[j])
				return (s);
	return (NULL);
}
