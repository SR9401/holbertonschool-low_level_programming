#include "lists.h"

/**
**insert_dnodeint_at_index - inserer un noeud a l'emplacement de l'index
*
*@idx: position ou inserer le noeud
*
*@h: lllll
*
*@n: data du noeud
*
*Return: adresse du nouveau noeud
*
**/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *n_noeud;
dlistint_t *tmp;
unsigned int i = 0;

n_noeud = malloc(sizeof(dlistint_t));
	if (n_noeud == NULL)
	{
	return (NULL);
	}
n_noeud->n = n;

	if (*h == NULL)
	{
	*h = n_noeud;
	n_noeud->prev = NULL;
	n_noeud->next = NULL;
	}
	tmp = *h;

		while (tmp->next != NULL)
		{
			if (i == (idx - 1))
			{

				n_noeud->next = tmp->next;
				n_noeud->prev = tmp;
				tmp->next->prev = n_noeud;
				tmp->next = n_noeud;
			}
			else
			{
				tmp = tmp->next;

			}
			i++;
		}

return (n_noeud);
}
