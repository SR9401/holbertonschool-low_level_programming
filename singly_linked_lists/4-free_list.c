#include "lists.h"

/**
* free_list - fonction pour liberer la memoire
*
*@head: ddddd
*
**/

void free_list(list_t *head)

{
list_t *n_noeud;

		while (head != NULL)
		{
		n_noeud = head->next;
		free(head);
		head = n_noeud;
		}
}
