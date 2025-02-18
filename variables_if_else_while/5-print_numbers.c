#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
	int main(void)
{
	int b10 = 48;

	while (b10 < 58)
{
	putchar(b10);
	if (b10 < 57)
{
	putchar(44);
	putchar(32);
}
	b10++;
}
	putchar('\n');
return (0);
}
