#include "main.h"

/**
 * main - Affiche le nom du programme, suivi d'un saut de ligne.
 * @argc: Nombre d'arguments de la ligne de commande.
 * @argv: Tableau de chaines de caracteres contenant
 * les arguments de la ligne de commande.
 *
 * Return: Toujours 0.
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
