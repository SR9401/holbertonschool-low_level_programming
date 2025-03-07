#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
	int i = 1;
	int sum = 0;

	if (argc == 1)
{
	printf("0\n");
	return (0);
}
	else
{

		while (i < argc)

		{
			int j = 0;
				while (argv[i][j] != '\0')
			{
					if (!isdigit(argv[i][j]))
				{
					printf("Error");
					return (1);
				}
					j++;


			sum += atoi(argv[i]);
			i++;
			}
		}
	printf("%d\n", sum);
}
return (0);
}
