#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - Renvoie un pointeur vers un tableau d'entiers à
 * deux dimensions.
 * @width: Nombres de lignes du tableau.
 * @height: Nombre de colonne du tableau.
 *
 * Return: Pointeur vers l'adresse du début du tableau.
 */
int **alloc_grid(int width, int height)
{
	int **tab;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	tab = malloc(sizeof(*tab) * height);
	if (tab == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		tab[i] = malloc(sizeof(**tab) * width);
		if (tab[i] == NULL)
		{
			while (i >= 0)
			{
				free(tab[i]);
				i--;
			}
			free(tab);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			tab[i][j] = 0;
		}
	}
	return (tab);
}
