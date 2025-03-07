#include <stdio.h>
#include <stdlib.h>

/**
*main - jjjjj
*
*@argc: ppppp
*
*@argv: 45452
*
*Return: zero
**/

	int main(int argc, char *argv[])

{
	if (argc == 3)

	{
	int mul = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", mul);
	return (0);
	}
		else
	{
		printf("error\n");
		return (1);
	}
}
