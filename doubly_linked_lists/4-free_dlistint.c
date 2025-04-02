#include "lists.h"

/**
* free_dlistint - fonction pour liberer la memoire
*
*@head: ddddd
*
**/

void free_dlistint(dlistint_t *head)

{
dlistint_t *n_noeud;

		while (head != NULL)
		{
		n_noeud = head->next;
		free(head);
		head = n_noeud;
		}
}
