#include "main.h"
#include <stdlib.h>

/**
 * main - Affiche le résultat d'une multiplication de deux nombres,
 * suivi d'un saut de ligne.
 * @argc: Nombre d'arguments de la ligne de commande.
 * @argv: Tableau de chaines de caracteres contenant
 * les arguments de la ligne de commande.
 *
 * Return: 0 (Success), ou 1.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
