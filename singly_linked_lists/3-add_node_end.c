#include "lists.h"

/**
 * *add_node_end - fonction qui compte le nombre de noeuds
 *
 * @head: pppp
 *
 * @str: chaine de caractere
 *
 * Return: nombre de noeuds
**/

list_t *add_node_end(list_t **head, const char *str)

{
char *dstr;
list_t *n_noeud;
int len = 0;
list_t *tmp;

dstr = strdup(str);
	if (dstr == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
n_noeud = malloc(sizeof(list_t));
	if (n_noeud == NULL)
	{
	free(dstr);
	return (NULL);
	}
n_noeud->str = dstr;
n_noeud->len = len;
n_noeud->next = NULL;

	if (*head == NULL)
	{
		*head = n_noeud;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = n_noeud;
	}
return (n_noeud);

}
