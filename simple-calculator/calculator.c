#include <stdio.h>

/**
 * add - Addition de a et b.
 * Return: résultat de a + b.
 */
float add(void)
{
	float a, b;

	printf("a: ");
	scanf("%f", &a);
	printf("b: ");
	scanf("%f", &b);
	return (a + b);
}
/**
 * sub - Soustraction de a et b.
 * Return: résultat de a - b.
 */
float sub(void)
{
	float a, b;

	printf("a: ");
	scanf("%f", &a);
	printf("b: ");
	scanf("%f", &b);
	return (a - b);
}
/**
 * multi - Multiplication de a et b.
 * Return: résultat de a * b.
 */
float multi(void)
{
	float a, b;

	printf("a: ");
	scanf("%f", &a);
	printf("b: ");
	scanf("%f", &b);
	return (a * b);
}
/**
 * divide - Division de a et b (sauf division par zéro).
 * Return: résultat de a / b.
 */
float divide(void)
{
	float a, b;

	printf("a: ");
	scanf("%f", &a);
	printf("b: ");
	scanf("%f", &b);
	if (b == 0)
	{
		printf("Error: division by zero\n");
		return (0);
	}
	printf("Result: %.2f\n", a / b);
	return (0);
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
		printf("\n1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
		printf("\nChoice:");
		scanf("%d", &c);

		if (c == 0)
		{
			printf("Bye!\n");
		}
		else if (c == 1)
		{
			printf("Result: %.2f\n", add());
		}
		else if (c == 2)
		{
			printf("Result: %.2f\n", sub());
		}
		else if (c == 3)
		{
			printf("Result: %.2f\n", multi());
		}
		else if (c == 4)
		{
			divide();
		}
		else if (c < 0 || c > 4)
		{
			printf("Invalid choice\n");
		}
	} while (c != 0);
	return (0);
}
