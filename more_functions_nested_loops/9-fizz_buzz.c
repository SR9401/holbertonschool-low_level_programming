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
			putchar(' ');
		}
			else if (num % 5 == 0)
		{
			printf("Buzz");
			putchar(' ');
		}
			else if (num % 3 == 0)
		{
			printf("Fizz");
			putchar(' ');

		}
			else
		{
			printf("%d", num);
			putchar(' ');
		}
		num++;
	}
	return (0);
}
