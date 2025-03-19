#include "3-calc.h"

/**
 * main - Programme principal pour effectuer une opération simple
 * @argc: Nombre d'arguments
 * @argv: Tableau d'arguments
 * Return: 0 si succes, 98/99/100 selon les erreurs
 */
int main(int argc, char *argv[])
{
	int (*operator)(int, int);
	int n1, n2, resultat;

	if (argc != 4)
	{
	printf("Error\n");
	return (98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	operator = get_op_func(argv[2]);

	if (operator == NULL)
	{
	printf("Error\n");
	return (99);
	}

	resultat = operator(n1, n2);
	printf("%d\n", resultat);

	return (0);
}

