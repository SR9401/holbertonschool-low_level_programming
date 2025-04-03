#include "lists.h"

/**
*sum_dlistint - fonction qui additionne les noeuds
*
*@head:mmmm
*
*Return: somme des noeuds
*
**/


int sum_dlistint(dlistint_t *head)

{
int n = 0;


	while (head != NULL)
	{
		n += head->n;
		head = head->next;
	}
return (n);
}
