#include "main.h"

/**
 * times_table - Afficher les tables de multiplication de 0 à 9.
 */
void times_table(void)
{
	int t;
	int m;
	int p;

	for (t = 0; t <= 9; t++)
	{
		for (m = 0; m <= 9; m++)
		{
			p = t * m;
			if (m == 0)
			{
				_putchar ('0' + p);
			}
			else
			{
				_putchar (',');
				_putchar (' ');
				if (p >= 10)
				{
					_putchar ('0' + (p / 10));
					_putchar ('0' + (p % 10));
				}
				else
				{
					_putchar (' ');
					_putchar ('0' + p);
				}
			}
		}
		_putchar ('\n');
	}

}
