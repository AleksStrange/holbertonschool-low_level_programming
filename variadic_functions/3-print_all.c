#include <stdio.h>
#include "variadic_functions.h"

/**
 * p_char - Affiche un caractere avec le separateur.
 * @ap: Liste des arguments variadiques.
 * @sep: Chaine de separation.
 */
void p_char(va_list ap, char *sep)
{
	printf("%s%c", sep, va_arg(ap, int));
}
/**
 * p_int - Affiche un entier avec le separateur.
 * @ap: Liste des arguments variadiques.
 * @sep: Chaine de separation.
 */
void p_int(va_list ap, char *sep)
{
	printf("%s%d", sep, va_arg(ap, int));
}
/**
 * p_float - Affiche un float avec le separateur.
 * @ap: Liste des arguments variadiques.
 * @sep: Chaine de separation.
 */
void p_float(va_list ap, char *sep)
{
	printf("%s%f", sep, va_arg(ap, double));
}
/**
 * p_str - Affiche une chaine ou (nil) avec le separateur.
 * @ap: Liste des arguments variadiques.
 * @sep: Chaine de separation.
 */
void p_str(va_list ap, char *sep)
{
	char *str = va_arg(ap, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s%s", sep, str);
}
/**
 * print_all - Affiche n'importe quel type d'argument selon format.
 * @format: Liste des types d'arguments passes a la fonction.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0;
	unsigned int j;
	char *sep = "";

	fmt_t types[] = {
		{'c', p_char},
		{'i', p_int},
		{'f', p_float},
		{'s', p_str},
		{0, NULL}
	};
	va_start(ap, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (types[j].c)
		{
			if (format[i] == types[j].c)
			{
				types[j].fp(ap, sep);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
