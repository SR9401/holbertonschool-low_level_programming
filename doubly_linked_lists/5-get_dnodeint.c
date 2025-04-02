#include "lists.h"

/**
*get_dnodeint_at_index - fonctions qui donne le n(index) noeud
*
*@head: jjj
*
*@index: positions du noeud a recuperer
*
*Return: adresse du noeud correspondant
**/


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

unsigned int i = 0;


	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}
return (head);
}
