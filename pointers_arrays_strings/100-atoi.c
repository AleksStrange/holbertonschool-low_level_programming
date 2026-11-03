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
	int over;

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
		over = s[i] - '0';
		if (res < (-2147483648 / 10) || (res == (-2147483648 / 10) && over > 8))
		{
			return (0);
		}
		res = res * 10 - over;
		i++;
	}
	if (sign == 1)
	{
		return (-res);
	}
	return (res);
}
