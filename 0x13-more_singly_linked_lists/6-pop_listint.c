#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delete the head of the listint list
 *@head: pointer to the pointer of the head list
 *
 * Return: the data n of the deleted node, or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	int b;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	b = temp->n;

	*head = temp->next;
	free(temp);

	return (b);
}
