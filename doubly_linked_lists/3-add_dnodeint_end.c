#include "lists.h"

/**
 * add_dnodeint - fonction qui compte le nombre de noeuds
 *
 * @head: pppp
 *
 * @n: entier
 *
 * Return: adresse du nouvel element
**/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)

{
dlistint_t *n_noeud;
dlistint_t *tmp;

n_noeud = malloc(sizeof(dlistint_t));
	if (n_noeud == NULL)
	{
	return (NULL);
	}
n_noeud->n = n;

	if (*head == NULL)
	{
	*head = n_noeud;

	}
	else
	{
		tmp = *head;
		while(tmp->next != NULL)
		{
			tmp = tmp->next;
		}
	tmp->next = n_noeud;
	}
return (n_noeud);
}

