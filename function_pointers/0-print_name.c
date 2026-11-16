#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Affiche un nom.
 * @name: Le nom à afficher.
 * @f: Pointeru vers l'adresse de la fonction utilisé pour afficher.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
