#ifndef _LIST_H_
#define _LIST_H_


#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int _putchar(char c);




/**
 * struct list_s - singly linked list
 * @str: chaine de caractere - (malloc'ed string)
 * @len: longueur de la chaine de caractere
 * @next: pointeur sur le prochain noeud
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
#endif /* LIST_H */
