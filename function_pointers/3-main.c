#include "3-calc.h"

/**
 * main - Effectue des operations simples a partir
 * des arguments de la ligne de commande.
 * @argc: Nombre d'arguments de la ligne de commande.
 * @argv: Tableau de chaines de caracteres contenant
 * les arguments de la ligne de commande.
 *
 * Return: Toujours 0.
 */
int main(int argc, char *argv[])
{
	int (*func)(int, int);
	int a;
	int b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", func(a, b));
	return (0);
}
