#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - entry point for function
 * @argc: arg counter, number of args
 * @argv: array of pointers to args
 *
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	char operator;

	operator = get_op_func(argv[2]);

	int n1 = atoi(argv[1]);
	int n2 = atoi(argv[3]);
	int resultat = operator n1 n2

	printf("%d\n", resultat);
}