#include "3-calc.h"

/**
 * op_add - Additionne deux entiers.
 * @a: Premier entier.
 * @b: Deuxieme entier.
 *
 * Return: La somme de a + b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Soustrait deux entiers.
 * @a: Premier entier.
 * @b: Deuxieme entier.
 *
 * Return: La difference de a - b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiplie deux entiers.
 * @a: Premier entier.
 * @b: Deuxieme entier.
 *
 * Return: Le produit de a * b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Divise deux entiers.
 * @a: Dividende.
 * @b: Diviseur.
 *
 * Return: Le resultat de a / b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Calcule le reste d'une division.
 * @a: Dividende.
 * @b: Diviseur.
 *
 * Return: Le reste de a / b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
