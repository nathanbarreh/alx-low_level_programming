#include <stdio.h>
#include "lists.h"


/**
 * print_list - prints all elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
	{ if (!h->str)
		printf("[0](nil)");
	}
		else
		    printf("\n[%u] %s\n", h->str, h->len);
		 h = h->next;
		 n++;
}
return (n);
}
