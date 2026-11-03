#include "main.h"

/**
 * _atoi - Convertit une chaîne de caractère en entier, en prenant en compte
 * les signes + et -.
 * @s: Pointeur de l'adresse du début de la chaine.
 * Return: res * sign.
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int res = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			break;
		}
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + (s[i] - '0');
		i++;
	}
	return (res * sign);
}
