#include <stdio.h>
#include "main.h"
/**
*rev_string - pppp
*
*@s: rrr
*Return: Always 0
**/



	void rev_string(char *s)


{
	char *a = s;

		while (*s != '\0')
	{
		putchar(*s);

		s++;

	}

{
	putchar('\n');
}


		while (a < s)
	{

		s--;
		putchar(*s);
	}
	putchar('\n');
}
