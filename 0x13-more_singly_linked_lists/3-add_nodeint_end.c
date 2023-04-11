#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *_new;
	listint_t *temp = *head;

	_new = malloc(sizeof(listint_t));
	if (!_new){
		return (NULL);
	}
	_new->n = n;
	_new->next = NULL;

	if (*head == NULL)
	{
		*head = _new;
		return (_new);
	}

	while (temp->next)
	{temp = temp->next;

	temp->next = _new;
	}
	return (_new);
}
