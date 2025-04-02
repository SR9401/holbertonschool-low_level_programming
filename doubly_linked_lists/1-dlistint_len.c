#include "lists.h"

/**
*dlistint_len - fonction qui imprimme tout les elements de dlistint_t
*
*@h: llll
*
*Return: nombre de noeud(s)
*
**/


size_t dlistint_len(const dlistint_t *h)

{
int i = 0;
const dlistint_t *temp = h;


	if (h == NULL)
	{
	return (0);
	}
	while (temp != NULL)
	{
	temp = temp->next;
	i++;
	}
return (i);
}
