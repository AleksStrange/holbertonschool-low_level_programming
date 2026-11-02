#include <stdio.h>

/**
 * get_user_choice - Affiche le menu et gère la saisie sécurisée.
 * Return: Le choix validé de l'utilisateur.
 */
int get_user_choice(void)
{
	int c;

	printf("Bienvenue dans le Calculator 3000 mon ami(e) !\n");
	printf("\n1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");
	while (1)
	{
		printf("\nChoice: ");
		if (scanf("%d", &c) != 1)
		{
			printf("Invalid choice\n");
			while (getchar() != '\n')
			{
			}
		}
		else
		{
			while (getchar() != '\n')
			{
			}
			return (c);
		}
	}
}
/**
 * add_sub - Addition et soustraction de a et b.
 * @c: Choix de l'utilisateur (1 pour add et 2 pour sub).
 * Return: résultat de a + b ou a - b.
 */
float add_sub(int c)
{
	float a, b;

	printf("a: ");
	scanf("%f", &a);
	printf("b: ");
	scanf("%f", &b);

	if (c == 1)
	{
		return (a + b);
	}
	else if (c == 2)
	{
		return (a - b);
	}
	return (0);
}
/**
 * mul_div - Multiplication et division de a et b.
 * @c: Choix de l'utilisateur (1 pour mult et 2 pour div).
 * Return: résultat de a * b ou a / b.
 */
void mul_div(int c)
{
	float a, b;

	printf("a: ");
	scanf("%f", &a);
	printf("b: ");
	scanf("%f", &b);

	if (c == 3)
	{
		printf("Result: %.2f\n", a * b);
	}
	else if (c == 4)
	{
		if (b == 0)
		{
			printf("Error: division by zero\n");
			return;
		}
		printf("Result: %.2f\n", a / b);
	}
}
/**
 * main - Fonction principale.
 * Return: 0 (Success).
 */
int main(void)
{
	int c;

	do {
		c = get_user_choice();

		if (c == 0)
		{
			printf("Bye!\n");
		}
		else if (c == 1 || c == 2)
		{
			printf("Result: %.2f\n", add_sub(c));
		}
		else if (c == 3 || c == 4)
		{
			mul_div(c);
		}
		else
		{
			printf("Invalid choice\n");
		}
	} while (c != 0);
	return (0);
}
