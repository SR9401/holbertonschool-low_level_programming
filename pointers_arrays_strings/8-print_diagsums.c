#include <stdio.h>
#include "main.h"

/**
* print_diagsums - ldlls
* @a: a
* @size: size
*/
void print_diagsums(int *a, int size)
{
	int z = 0;
	int y = 0;
	int i = 0;

	while (i < size)
	{
		z += a[i * (size + 1)];
		y += a[(i + 1) * (size - 1)];
		i++;
	}
	printf("%d, ", z);
	printf("%d", y);
	printf("\n");
}
