#include <stdlib.h>
#include "main.h"

/**
 * isnumber - Verifie qu'une chaine ne contient que des chiffres.
 * @s: La chaine de caracteres a verifier.
 *
 * Return: 1 si uniquement des chiffres, sinon 0.
 */
int isnumber(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * main - Additionne des nombres positifs.
 * @argc: Nombre d'arguments.
 * @argv: Tableau d'arguments.
 *
 * Return: 0 en cas de succes, 1 si un caractere non numerique est trouve
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (isnumber(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

/*
*#include "main.h"
*#include <stdlib.h>
*
*
*main - Additionne des nombres positifs passes en arguments.
*@argc: Nombre d'arguments.
*@argv: Tableau d'arguments.
*
*Return: 0 en cas de succes, ou 1 si un argument n'est pas un chiffre.
*
*int main(int argc, char *argv[])
*{
*	int i;
*	int j;
*	int sum;
*
*	if (argc == 1)
*	{
*		printf("0\n");
*		return (0);
*	}
*	sum = 0;
*
*	for (i = 1; i < argc; i++)
*	{
*		for (j = 0; argv[i][j] != '\0'; j++)
*		{
*		if (argv[i][j] < '0' || argv[i][j] > '9')
*			{
*				printf("Error\n");
*				return (1);
*			}
*		}
*		sum += atoi(argv[i]);
*	}
*
*	printf("%d\n", sum);
*	return (0);
*}
*/
