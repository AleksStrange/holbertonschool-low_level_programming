#include "main.h"

/**
 * main - Affiche tous les arguments transmis au programme.
 * @argc: Nombre d'arguments de la ligne de commande.
 * @argv: Tableau de chaines de caracteres contenant
 * les arguments de la ligne de commande.
 *
 * Return: 0 (Success).
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
