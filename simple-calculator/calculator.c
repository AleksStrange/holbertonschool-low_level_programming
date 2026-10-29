#include <stdio.h>

/**
 * add - Addition de a et b.
 * Return: résultat de a + b.
 */
int add(void)
{
	int a, b;

	printf("a: ");
	scanf("%d", &a);
	printf("b: ");
	scanf("%d", &b);
	return (a + b);
}
/**
 * sub - Soustraction de a et b.
 * Return: résultat de a - b.
 */
int sub(void)
{
	int a, b;

	printf("a: ");
	scanf("%d", &a);
	printf("b: ");
	scanf("%d", &b);
	return (a - b);
}
/**
 * multi - Multiplication de a et b.
 * Return: résultat de a * b.
 */
int multi(void)
{
	int a, b;

	printf("a: ");
	scanf("%d", &a);
	printf("b: ");
	scanf("%d", &b);
	return (a * b);
}
/**
 * main - Fonction principale.
 * Return: 0 (Success).
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
		else if (c == 1)
		{
			printf("Result: %d\n", add());
		}
		else if (c == 2)
		{
			printf("Result: %d\n", sub());
		}
		else if (c == 3)
		{
			printf("Result: %d\n", multi());
		}
		else if (c < 0 || c > 4)
		{
			printf("Invalid choice\n");
		}
	} while (c != 0);
	return (0);
}
