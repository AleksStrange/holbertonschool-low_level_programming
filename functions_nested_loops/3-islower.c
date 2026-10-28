#include "main.h"

/**
 *_islower - Verifie si un caractère est en minuscule.
 *@c: le caractère a verifier.
 *
 *Return: 1 (Si c'est une minuscule) sinon 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
