#include "3-calc.h"

/**
 * op_add - Additionne deux nombres
 * @a: Premier nombre
 * @b: Deuxime nombre
 * Return: La somme de a et b
**/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Soustrait b de a
 * @a: Premier nombre
 * @b: Deuxime nombre
 * Return: soustraction de a et b
**/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiplie a et b
 * @a: Premier nombre
 * @b: Deuxième nombre
 * Return: Le produit de a et b
**/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divise a par b
 * @a: Premier nombre
 * @b: Deuxième nombre
 * Return: Le quotient de a et b, ou erreur si b == 0
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Calcule le modulo de a par b
 * @a: Premier nombre
 * @b: Deuxième nombre
 * Return: Le reste de la division de a par b, ou erreur si b == 0
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
