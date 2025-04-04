#include "lists.h"
/**
*delete_dnodeint_at_index - fonction qui supprime le noued
*
*@head: 6666666
*
*@index: emplacement du noeud a supprimer
*
*Return: 1 si reussi -1 si echoue
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
		free(tmp);
	}
	else
	{

		while (tmp->next != NULL)
		{
			if (i == index)
			{
				tmp->prev->next = tmp->next;
				tmp->next->prev = tmp->prev;
				free(tmp);

			}
			else
			{
				tmp = tmp->next;

			}
			i++;
		}
	}
	if (index > i || *head == NULL)
	{
	return (-1);
	}

return (1);
}
