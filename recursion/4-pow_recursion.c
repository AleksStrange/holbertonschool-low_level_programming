#include "main.h"

/**
 * _pow_recursion - Renvoie la valeur de x élevée à la puissance y.
 * @x: Valeur à élevée.
 * @y: Valeur a laquelle on va élevé x.
 *
 * Return:
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
