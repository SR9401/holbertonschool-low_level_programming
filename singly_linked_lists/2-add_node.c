#include "lists.h"

/**
 * *add_node - fonction qui compte le nombre de noeuds
 *
 * @head: pppp
 *
 * @str: chaine de caractere
 *
 * Return: nombre de noeuds
**/

list_t *add_node(list_t **head, const char *str)

{
char *dstr;
list_t *n_noeud;


dstr = strdup(str);
	if (dstr == NULL)
	{
		return (NULL);
	}
n_noeud = malloc(sizeof(list_t));

	if (n_noeud == NULL)
	{
	free(dstr);
	return (NULL);
	}
n_noeud->str = dstr;
n_noeud->len = strlen(dstr);
n_noeud->next = *head;
*head = n_noeud;
return (n_noeud);

}
