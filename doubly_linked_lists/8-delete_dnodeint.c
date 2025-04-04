#include "lists.h"
/**
*delete_dnodeint_at_index - fonction qui supprime le noued de lindex correspondant
*
*@head: 6666666
*
*@index: emplacement du noeud a supprimer
*
*
**/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)

{
dlistint_t *tmp;
unsigned int i = 0;

tmp = *head;

	if (index == 0)
	{
		tmp->next->prev = NULL;
		*head = tmp->next;
	}
	else
	{

		while (tmp->next != NULL)
		{
			if (i == index)
			{
				tmp->prev->next = tmp->next;
				tmp->next->prev = tmp->prev;


			}
			else
			{
				tmp = tmp->next;

			}
			i++;
		}
	}
	if (i > index)
	{
	return(-1);
	}

return (1);
}
