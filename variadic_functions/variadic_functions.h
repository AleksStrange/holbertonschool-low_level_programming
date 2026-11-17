#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct fmt_func - Associe un caractere de format
 * a une fonction d'affichage.
 * @c: Caractere de format.
 * @fp: Pointeur vers la fonction d'affichage correspondante.
 */
typedef struct fmt_func
{
	char c;
	void (*fp)(va_list, char *);
} fmt_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
