#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int c;

	do {
		printf("Bienvenue dans le Calculator 3000 mon ami(e) !\n");
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
		printf("Choice:");
		scanf("%d", &c);

		if (c == 0)
		{
			printf("Bye!\n");
		}
		else if (c < 0 || c > 4)
		{
			printf("Invalid choice\n");
		}
	} while (c != 0);
	return (0);
}
