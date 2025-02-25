#include <stdio.h>
#include "main.h"
/**
*main - pppp
*
*
*Return: Always 0
**/

	int main(void)
{
	int num = 1;

		while (num <= 100)
	{
			if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz");
		}
			else if (num % 5 == 0)
		{
			printf("Buzz");
		}
			else if (num % 3 == 0)
		{
			printf("Fizz");

		}
			else
		{
			printf("%d", num);
		}



		if (num == 100)
	{
		num++;
	}
		else
	{
		putchar(' ');
		num++;
	}
	}
	return (0);
}
