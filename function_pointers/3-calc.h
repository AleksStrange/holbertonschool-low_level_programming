#ifndef CALC_H
#define CALC_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct op - Structure renommer (op_t),
 * qui va associer un operateur a la bonne fonction.
 * @op: L'operateur sous forme de chaine de caractères.
 * @f: Pointeur vers l'adresse de la fonction qui executera l'operation.
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
