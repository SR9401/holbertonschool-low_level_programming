#include "lists.h"

/**
*print_dlistint - fonction qui imprimme tout les elements de dlistint_t
*
*@h: llll
*
*Return: nombre de noeud(s)
*
**/


size_t print_dlistint(const dlistint_t *h)

{
int i = 0;
const dlistint_t *temp = h;


	if (h == NULL)
	{
	return (0);
	}
	while (temp != NULL)
	{

	printf("%d\n", temp->n);
	temp = temp->next;
	i++;
	}
return (i);
}
