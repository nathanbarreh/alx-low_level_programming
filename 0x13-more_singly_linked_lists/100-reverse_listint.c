#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in a list 
 *
 * Return: pointer to the first node in a list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev , *next = NULL;
        listint_t *current = *head;
	
	while (current != NULL) 
	{
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head = prev;

    return (prev);
}
