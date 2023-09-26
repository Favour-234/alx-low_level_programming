#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free listint list and set the head pointer to NULLL
 * @head: pointer to a pointer to the head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *r;

	while (*head != NULL)
	{
		r = *head;
		*head = (*head)->next;
		free(r);
	}
}
