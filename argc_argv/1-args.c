#include "main.h"

/**
 * main - Affiche le nombre d'arguments transmis au programme.
 * @argc: Nombre d'arguments de la ligne de commande.
 * @argv: Tableau de chaines de caracteres contenant
 * les arguments de la ligne de commande.
 *
 * Return: 0 (Success).
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
