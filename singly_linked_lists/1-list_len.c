#include "lists.h"

/**
 * list_len - fonction qui compte le nombre de noeuds
 *
 * @h: pppp
 *
 * Return: nombre de noeuds
**/

size_t list_len(const list_t *h)

{

size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
return (len);
}
