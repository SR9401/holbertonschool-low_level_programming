#include "lists.h"

/**
 * print_list - fonction qui imprimme tout les elemnts de la liste (list_t)
 *
 * list_t: liste qui contiennt tout les elements a imprimer
 *
 * @h: header
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)

{
unsigned int count = 0;

while (h != NULL)
{
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);
	h = h->next;
	count++;
}
return (count);
}
