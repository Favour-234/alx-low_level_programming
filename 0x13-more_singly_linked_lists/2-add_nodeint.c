#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add a new node at the beginning of listint list
 * @head: it is a  pointer to the other pointer of the head list.
 * @n: the value to be stored in the new node
 * Return: the new of the element or null if it fails.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;

	*head = new;
	return (new);
}
