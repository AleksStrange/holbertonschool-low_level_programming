#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Libère une grille à deux dimensions précédemment
 * créée par notre fonction `alloc_grid`.
 * @grid: Le pointeur de pointeur des lignes du tableau.
 * @height: Le nombre de lignes du tableau.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
