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

dlistint_t *add_dnodeint(dlistint_t **head, const int n)

{
dlistint_t *n_noeud;


n_noeud = malloc(sizeof(dlistint_t));
	if (n_noeud == NULL)
	{
	return (NULL);
	}
n_noeud->n = n;

	if (*head != NULL)
	{
	n_noeud->next = *head;
	n_noeud->prev = NULL;
	(*head)->prev = n_noeud;
	}
	else
	{
	n_noeud->prev = NULL;
	n_noeud->next = NULL;
	}
*head = n_noeud;
return (n_noeud);

}
