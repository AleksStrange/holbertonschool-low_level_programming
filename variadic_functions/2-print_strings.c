#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Affiche des chaînes de caractères,
 * suivies d'un saut de ligne.
 * @separator: La chaine de caracteres a afficher entre les chaines.
 * @n: Le nombre de chaînes passees a la fonction.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *chn;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		chn = va_arg(ap, char *);
		if (chn == NULL)
		{
			printf("(nil)");
		}
		else
		{
		printf("%s", chn);
		if (separator != NULL && i + 1 < n)
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
